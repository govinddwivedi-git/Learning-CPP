#include <bits/stdc++.h>

using namespace std;
int main()
{
    // string str  = "Hello, This is a program ";
    // str.push_back('1');
    // str.push_back('-');
    // str.push_back('0');
    // cout << "Before : " << str << endl;

    // str.pop_back();
    // cout << "After : "<< str << endl;

    char ch[] = "HEL\0LO";
    cout << "Before : "<< ch << endl;
    ch[3]='l';
    cout << "After : " << ch << endl;
    cout << endl;

    string s = "HEL\0LO";
    cout <<"Before : "<< s << endl;
    /*s.at(3)= 'l';                
    -- Error : terminate called after throwing an instance of 'std::out_of_range'
    what():  basic_string::at: __n (which is 3) >= this->size() (which is 3)*/ 
    s[3]='l';
    cout <<"After : "<< s << endl;
    return 0;
}