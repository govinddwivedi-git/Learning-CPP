#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;
    cout << "Value of num is : " << num << endl;
    cout << "Address of num is : " << ptr << endl;
    cout << "Size of num is : " << sizeof(num) << endl;
    cout << "Size of pointer is : " << sizeof(ptr) << endl;
    cout << "Printing num using *ptr : " << *ptr << endl;
    return 0;
}
