#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    bool swapped = false;
    for(int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
int main()
{
    int arr[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubbleSort(arr, 9);
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