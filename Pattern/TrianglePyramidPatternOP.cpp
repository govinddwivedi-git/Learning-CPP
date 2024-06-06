#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int i = 1;
    
    
    while (i<=n)
    {
        int k=1;
        while(k<=i-1)
        {
            cout<<" ";
            k++;
        } 
        
        int j = 1;
        while(j<=n+1-i)
        {   

            cout<<"*";
            j++;
        }
        i++;
        
       
        cout<<endl;

    }

} 