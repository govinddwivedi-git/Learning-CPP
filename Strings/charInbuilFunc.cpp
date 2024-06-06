#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char str1 [100] = "Hello";
    char str2 [100] = "Bolo";
    char str3 [100] = "Hello";

    cout << strcmp(str1,str2) << endl;
    cout << strcmp(str1,str3) << endl;

    return 0;
}