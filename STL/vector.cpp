#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Capacity of vector is : " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity of vector is : " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity of vector is : " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity of vector is : " << v.capacity() << endl;
    cout << "Size of vector is : " << v.size() << endl;

    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    cout << "Capacity of vector is : " << v.capacity() << endl;
    cout << "Size of vector is : " << v.size() << endl;
    cout << "Element at 3rd index is : " << v.at(3) << endl;
    cout << "First Element is : " << v.front() << endl;
    cout << "Last element is : " << v.back() << endl;
    cout << "Before popping : " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "After popping : " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> copycat(v);

    cout << "After clearing : " << endl;
    v.clear();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "Capacity of vector is : " << v.capacity() << endl;
    cout << "Size of vector is : " << v.size() << endl;

    cout << "Elements of copy cat are : ";
    for (int i : copycat)
    {
        cout << i << " ";
    }

    cout << endl;

    vector<int> t(5, 9);
    cout << "Elements of vector t are : ";
    for (int i : t)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}