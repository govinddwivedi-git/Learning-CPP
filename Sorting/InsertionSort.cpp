#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    insertionSort(arr, 9);
    cout<<endl;
    cout<<endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "\t";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    return 0;
}