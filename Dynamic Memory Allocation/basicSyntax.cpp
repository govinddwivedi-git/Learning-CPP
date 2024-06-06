#include <bits/stdc++.h>
using namespace std;

int getSum(int* arr,int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << getSum(arr,n) << endl;
    int *ptr = new int;
    *ptr = 56;
    cout << *ptr << endl;

    delete ptr;

    delete []arr;

    *ptr = 25; // Undefined behavior.It tries to access the deleted integer again and prints its value. However, accessing memory that has been freed using delete is undefined behavior, and the program may crash or produce unexpected results.

    cout << *ptr << endl; 
    
    return 0;
}