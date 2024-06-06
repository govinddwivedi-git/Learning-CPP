#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[100];
    fill_n(arr, 100, 9);
    int i = 0;
    while (i < 100)
    {
        cout << arr[i] << " ";
        i++;
    }
    return 0;
}