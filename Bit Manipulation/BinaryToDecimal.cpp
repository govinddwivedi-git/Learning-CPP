#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string binary;
    cin >> binary;
    int decimal = 0;
    int power = 1;
    for (int i = binary.size() - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += power;
        }
        power *= 2;
    }

    cout << decimal << endl;
    return 0;
}