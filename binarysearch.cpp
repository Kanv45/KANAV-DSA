
#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <=end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid =(start+end)/2;
    }
    return -1;
}
int main()
{
    int even[] = {1, 3, 4, 6, 7, 9};
    int odd[] = {1, 6, 8, 9, 12, 15};
    int index = BinarySearch(even, 6, 3);
    cout << "The Index of 7 is" << index;
    return 0;
}
