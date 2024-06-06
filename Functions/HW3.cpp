#include <iostream>
using namespace std;
int Fibnacci(int n){
    int a=0,b=1;
    int fibNum;
    if(n==1) return 0;
    else if(n==2) return 1;
    for(int i=1;i<=n-2;i++){
        fibNum=a+b;
        a=b;
        b=fibNum;
    }
    return fibNum;
}
int main()
{
    int n;
    cout << "Enter the n for nth fibnacci number : " ;
    cin>>n;
    cout<< "Your nth fibnacci number is : "<< Fibnacci(n);
    return 0;
}