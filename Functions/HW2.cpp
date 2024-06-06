#include <iostream>
using namespace std;
int countSetBits(int a, int b)
{
    int i = 0;
    int count_a = 0;
    while (a)
    {
        if ((a & 1) == 1)
        {
            count_a += 1;
        }
        a=(a>>1);
        i++;
    }
    int j = 0;
    int count_b = 0;
    while (b)
    {
        if ((b & 1) == 1)
        {
            count_b += 1;
        }
        b=(b>>1);
        j++;
    }
    return count_a + count_b;
}
int main()
{
    int x, y;
    cout << "Enter your two numbers : ";
    cin >> x >> y;
    cout << "Number of setbits are : " << countSetBits(x, y);
    return 0;
}