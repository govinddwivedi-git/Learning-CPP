#include <iostream>
using namespace std;
int main()
{
    int cel, feh;
    cout << "Enter the temperature in Fehrenheit : ";
    cin >> feh;
    cel = (feh - 32) * 0.5556;
    cout << "Your temperature in Celsius is : " << cel;
}