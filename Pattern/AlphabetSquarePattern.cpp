#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int i = 1;
    int alpha = 65;
    
    while (i<=n)
    {
        
        char ch = (char)alpha;
        int j = 1;
        while(j<=n)
        {
            cout<<ch<<" ";
            
            j++;
        }
        i++;
        alpha++;
        cout<<endl;

    }

}