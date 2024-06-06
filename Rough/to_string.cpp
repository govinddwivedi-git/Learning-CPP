#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num = 12546;
    vector <char> v;
    for(char ch : to_string(num))
    v.push_back(ch);
    cout << to_string(num) << endl;
    for(auto ch:v) cout << ch << " ";
    return 0;
}