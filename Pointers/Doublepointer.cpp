#include <iostream>
using namespace std;
int main()
{
    int x = 12;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    cout << "Address of x : " << ptr1 << endl;
    cout << "Address of ptr1 : " << ptr2 << endl;
    cout << "Address of ptr2 : " << ptr3 << endl;
    
    cout << "value stored in ptr1 : " << *ptr2 << endl;
    cout << "value stored in ptr2 : " << *ptr3 << endl;

    cout << "value of x : " << x << endl;
    cout << "value of x through ptr1 : " << *ptr1 << endl;
    cout << "value of x through ptr2 : " << **ptr2 << endl;
    cout << "value of x through ptr3 : " << ***ptr3 << endl;
   
    return 0;
}