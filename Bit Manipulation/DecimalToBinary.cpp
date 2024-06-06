#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string binary = "";
    while (n > 0)
    {
        if(n%2) binary += '1';
        else binary += '0';
        n = n / 2;
        
    }
    reverse(binary.begin(),binary.end());

    cout << binary << endl;

    return 0;
}