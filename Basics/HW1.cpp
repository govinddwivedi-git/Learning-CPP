#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your character : " << endl;
    cin>>ch;
    if(ch<='z' && ch>='a') cout<<"Smallcase"<<endl;
    else if(ch<='Z' && ch>='A') cout<<"Uppercase"<<endl;
    else if (ch<='9' && ch>='0') cout<<"Numeric"<<endl;

}
