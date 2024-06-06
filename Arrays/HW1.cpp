#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int size;
    cout<<"Enter the size of Array : ";
    cin>>size;
    cout<<"Enter the elements of Array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    int sum=0;
    cout<<"The elements of Array are : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        sum=sum+arr[i];
        
    }
    cout<<endl;
    cout<<"The Sum Of Array is : "<<sum;

    return 0;
}