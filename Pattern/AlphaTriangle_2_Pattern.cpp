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
        
        char ch = 'A'+ n-i;
        int j = 1;
        while(j<=i)
        {   

            
            cout<<ch<<" ";
            ch++;
            j++;
        }
        i++;

        cout<<endl;

    }

} 