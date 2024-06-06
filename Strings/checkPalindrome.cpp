#include <bits/stdc++.h> 
using namespace std;
char lower(char ch)
{
        if(ch<='Z' && ch>='A')
        {
            ch = ch - 'A' + 'a';
            return ch;
        }

        
        else return ch;
    
}
bool valid(char ch) {
    if(ch>='a' && ch <='z' || ch>='A' && ch <='Z' || ch<='9' && ch >='0') return true;
    else return false;
}
bool checkPalindrome(string s) {
    int b = 0;
    int e = s.length() - 1;
    while(b<=e){
        if(s[b]!=s[e]) return 0;
        else{
            b++;
            e--;
        }
    }
    return 1;
}
bool isPalindrome(string s){
    string temp = "";
    for(int i=0;i<s.length();i++){
        if (valid(s[i])) {
            temp.push_back(s[i]);
        }
    }
    for(int i = 0; i < temp.length(); i++) {
        temp[i] = lower(temp[i]);
    }

    return checkPalindrome(temp);

}


int main() {
    string str;
    cout << "Enter the string: " << endl;
    cin >> str;
    if (isPalindrome(str)) {
        cout << "Hai bhai Hai" << endl;
    } else {
        cout << "Chal nikal" << endl;
    }
   
    return 0;
}
