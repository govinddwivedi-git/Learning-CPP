#include <bits/stdc++.h>
#include <string>
using namespace std;


int compress(vector<char>& s){
    int index  = 0;
    int i =0;
    while(i<s.size()){
        int j = i+1;
        while(j<s.size() && s[i]==s[j]) j++;
        s[index++] = s[i];
        int count = j-i;
        if(count > 1){
            string temp = to_string(count); 
            for(char ch:temp) s[index++]=ch;
        }
        i=j;
    }
    return index;
    //kjanecaron
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; // The size of the vector
    cin >> n; // Read the size from user
    vector<char> v(n); // Declare a vector of characters with size n

    for (int i = 0; i < n; i++) {
        cin >> v[i]; // Read the elements from user
    }
    int len = compress(v); // Call the compress function and store the returned length
    
    for (int i = 0; i < len; i++) {
        cout << v[i] << " ";
    }
    return 0;
  
}