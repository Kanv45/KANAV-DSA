#include <iostream> 
#include <climits>
#include <vector>
using namespace std;
bool isValid (int arr[],int n, int k,int minvalue) {
    int c=1;
    int lastposition= arr[0];
    for (int i=1 ; i< n; i++){
        if (arr[i]-lastposition>=minvalue) {
            c++;
        lastposition=arr[i];
        }
    }
    if (c==k) {
        return true;
    } else {
        return false;
    }
}
int PossibleMaximumDistance(int arr[],int n,int k) {
    int  s=1;
    int maximum= 0;
    int largest= INT_MIN;
    int smallest= INT_MAX;
    sort(arr.begin(), arr.end());
    for (int i=0; i< n ; i++) {
        if (arr[i]>largest) {
            largest = arr[i];
        }
        if (arr[i]<smallest) {
            smallest = arr[i];
        }
    }
    int e = largest-smallest;
    int ans =0;
    while (s<=e) {
       int mid = s+ (e-s)/2;
        if (isValid(arr,n,k,mid)) {
     ans = mid; 
     s = mid +1;
        } else {
            e =mid -1;
        }
    }
    return ans;
    }
int main() {
int arr[] = {1,2,8,4,9};
int n = 5;
int k = 3;
cout << PossibleMaximumDistance(arr,n,k) << endl ;
return 0;
}