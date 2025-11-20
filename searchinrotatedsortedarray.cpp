#include <iostream>
using namespace std;
int ReturnTarget(int arr[], int target, int n) {
   int s=0;
    int e=n-1;
    while (s<=e) {
        int mid = s+ (e-s)/2;
        if (arr[mid]==target) {
            return mid;
        }
        if (arr[s]<=arr[mid]) {
            if (arr[s]<=target && target<=arr[mid]) {
                e = mid -1;
            }
            else  {
             s=mid + 1;
        }
    } else  {
        if (arr[mid]<=target && target<=arr[e]) {
            s=mid+1;
        }
        else {
            e=mid -1;
        }
    }
}
return -1;
}
int main () {
    int arr[] = {5,6,7,0,1,2,3,4};
     int n = 8;
     int target=6;
    int index = ReturnTarget(arr,target,n);
     cout << index;
     return 0;
}