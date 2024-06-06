#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2; // prefer to write start + (end-start)/2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
int main()
{
    int even[8] = {1, 3, 4, 6, 9, 15, 19, 57};
    int odd[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << binarySearch(even, 8, 19) << endl;
    cout << binarySearch(odd, 9, 8) << endl;

    return 0;
}