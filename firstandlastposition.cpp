#include <iostream>
using namespace std;
 int FirstOccurence(int arr[],int n,int k) {
    int start=0;
    int end = n-1;
    int mid =(start+end)/2;
    int ans=-1;
     while (start <=end) {
        if (arr[mid]==k) {
            ans =mid;
            end =mid -1;
        }
        else if (arr[mid]<k) {
            start=mid +1;
        }
        else if (arr[mid]>k){

        end =mid-1;
        }
     mid =(start+end)/2;
    }
     return ans;
    }
    int LastOccurence(int arr[],int n,int k) {
        int start=0;
        int end = n-1;
        int mid =(start+ end)/2;
        int ans=-1;
        while (start <=end) {
            if (arr[mid] == k) {
            ans =mid ;
            start=mid+1;
            }
            else if (arr[mid]<k) {
                start =mid+1;
            }
            else if(arr[mid]>k) { 
             end =mid-1;
        }
        mid =(start+end)/2;
    }
     return ans;
    }
    int main () {
        int arr[]={0,0,1,1,4,5,6};
        int index1= FirstOccurence(arr,7,1);
        int index2= LastOccurence(arr,7,1);
        cout << "the first position of 1 is  " << index1 << "the last position of 1 is " << index2;
        return 0;
    }