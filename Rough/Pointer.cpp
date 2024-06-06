#include <iostream>
using namespace std;
int main()
{
    int i=5;
    int * ptr = &i; // int*ptr=&i; is same , spaces are ignored...
    cout << ptr << endl;
    return 0;
}