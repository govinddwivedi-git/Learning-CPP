#include<iostream>
//#include<cstdlib>
using namespace std;
int main()
{
    int num;
    cout<< "Enter THE Number 1 or 2 : ";
    cin>>num;
    while(true){ 
        switch(num)
    {
        case 1 : cout<<"Hello";
                 break;
        case 2 : cout<<"Hi";
                 break;
                 
        default: cout<<"Thik hai Samjh gya";
         
    }
    //exit(1);
    exit(0);
    //break;
}
}