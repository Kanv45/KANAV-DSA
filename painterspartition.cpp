#include <iostream>
using namespace std;
bool isValid(int arr[],int k, int n,int maxpartition) {
    int m =0;
    int s =1;
 for (int i=0;i<n;i++) {
   if (arr[i]>maxpartition) {
    return false;
   } 
   if (m+arr[i]<=maxpartition) {
    m +=arr[i] ;
   }else {
    s ++;
    m = arr[i];
   }
   }
 return s>k? false:true ;
 }

int Painterspartition(int n ,int arr[],int k) {
    int s =0;
    int sum=0;
for (int i=0; i <n ;i++) {
 sum += arr[i];
}
int e = sum ;
int ans =0;
while ( s <=e) {
    int mid = s+ (e-s)/2;
    if (isValid(arr,k,n,mid)) {
        ans = mid ;
        e= mid-1;
     } else {
        s = mid +1;
        }

    }
 return ans ;
}
 int main () {
    int arr[] = {2,1,5,6,2,3};
    int n = 6;
    int k =2;
    cout << Painterspartition(n,arr,k);
    return 0;
 }
