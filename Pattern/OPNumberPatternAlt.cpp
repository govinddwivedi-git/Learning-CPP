#include<iostream>
using namespace std;

//WE CAN DO THIS PATTERN BY INITIALIZING i=0 , j=1 AND i<n AND PRINTING i+j  (OR) as shown below :

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    int i = 0;

    while (i<n)
    {
        int j = 1;
        
        while(j<=i+1)
        {
            cout<<i+j<<" ";
            
            j++;
        }
        i++;
        cout<<endl;

    }

}