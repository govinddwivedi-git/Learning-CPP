#include <iostream>
using namespace std;
void AP(int n){
    cout << "Enter the n of term which you want to display : ";
    cin >> n;
    cout << 3*n+7;
}
int main()
{
    int n;
    AP(n);
    return 0;
}