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
        // SPACE PRINTING - TRIANGLE 1
        int k=1;
        while(k<=n-i)
        {
            cout<<" ";
            k++;
        } 
        
        // TRIANGLE 2 PRINTING
        int j = 1;
        while(j<=i)
        {   

            cout<<j;
            j++;
        }
        
        // TRIANGLE 3 PRINTING
        int l = i-1 ;
        while(l)
        {
            cout<<l;
            l--;
        }
        i++;
        
       
        cout<<endl;

    }

} 