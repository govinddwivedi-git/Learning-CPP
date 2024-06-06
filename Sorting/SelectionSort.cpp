#include <iostream>
using namespace std;

int selectionSort(int arr[], int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }

}

int main()
{
    int arr[9]={9,8,7,6,5,4,3,2,1};
    selectionSort(arr,9);
    cout<<endl;
    cout<<endl;
    for(int i=0;i<9;i++){
        cout<< arr[i] <<"\t";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    return 0;
}