#include <iostream>
using namespace std;
int mountainIndex(int arr[],int n) {
    int s=1,e=n-2;
    int mid =s+(e-s)/2;
    while (s<=e) {
        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) {
            return mid;
        }
        else if (arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]) {
            s=mid +1;
        }
        else if (arr[mid]<arr[mid-1] && arr[mid]>arr[mid +1]){
            e=mid-1;
        }
        mid =s+(e-s)/2;
    }
    return -1;
}
int main() {
    int arr[]={0,9,76,80,82,90,88,9,0};
    int index=mountainIndex(arr,8);
    cout << "the index of mountain element in mainteioned array is " << index << " and the mountain element is " << arr[index];
    return 0;
}
// start ko 1 aur end ko n-2 isliye liya hai taaki kisi bji test cas emein ans aane mein ikkat na ho kyunki agr hmari mid 0 hi aagyi yafir n-1 hi aaagyi toh hamari code aage chlkr hmey koi output return nhi karega