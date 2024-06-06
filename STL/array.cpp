#include <iostream>
#include<array>
using namespace std;
int main()
{
    array<int,8> arr = {1,2,3,4,5,6,7,8};
    int size = arr.size();
    cout<<"Size is : "<< size << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Element at 3rd idndex is : "<< arr.at(3)<<endl;
    cout<<"First Element is : " << arr.front()<<endl;
    cout<<"Last element is : "<< arr.back()<<endl;
    return 0;
}