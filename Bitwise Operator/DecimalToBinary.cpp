#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float ans = 0; // power function return double value
    int i = 0;
    while (n!=0)
    {
        int bit = (n & 1);
        ans = (bit * pow(10, i)) + ans; //power function returns double value
        n = n >> 1;
        i++;
    }
    cout << ans << endl;
    
}