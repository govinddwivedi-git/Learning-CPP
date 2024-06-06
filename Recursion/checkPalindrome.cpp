#include <bits/stdc++.h>
using namespace std;

void check(string s)
{
    int n = s.size();
    if (n == 0 || n == 1)
    {
        cout << "true";
        return;
    }
    if (s[0] != s[n - 1])
    {
        cout << "false";
        return;
    }
    check(s.substr(1, n - 2));
}

bool checkWithOnePointer(string s, int i)
{
    int n = s.size();
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] != s[n - i - 1])
    {
        return false;
    }
    return checkWithOnePointer(s, i + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    // check(s);

    if (checkWithOnePointer(s, 0))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}