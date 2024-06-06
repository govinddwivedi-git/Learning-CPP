#include<iostream>
using namespace std;
// i+j-1
// We have to map this with alphabet.
// Let us map for the first element only.
// i+j-1=1 -> To make this 'A', add 'A'-1 both the side.
// 'A'+ i + j - 2 = 'A'.
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

            char ch = 'A'+ j + i - 2;
            cout<<ch<<" ";
            
            j++;
        }
        i++;

        cout<<endl;

    }

}