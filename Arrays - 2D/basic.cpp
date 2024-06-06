#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // For this array maximum number of rows required is 4 , threrfore it will complete upto 4 rows if vacant then it will give that vacancy 0 and after that it will be garbage value.

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}