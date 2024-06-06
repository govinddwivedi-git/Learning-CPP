#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int size = s.length();
    string part;
    cin >> part;
    cout << s.find(part) << endl;
    cout << s.erase(s.find(part),part.length()) << endl;

    return 0;
}