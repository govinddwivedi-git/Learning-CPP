#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number upto which you want the sum : ";
    cin>>n;
    int sum=0;
    int i = 0;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<"Sum is : " << sum;
}