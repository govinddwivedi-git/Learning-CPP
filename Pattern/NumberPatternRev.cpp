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
        int j = 1;
        while(j<=n)
        {
            cout<<n+1-j<<" ";
            j++;
        }
        i++;
        cout<<endl;

    }
    
    


}