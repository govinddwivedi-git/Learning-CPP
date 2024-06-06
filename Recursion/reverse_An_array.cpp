#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &v, int start, int end)
{
    if (start >= end)
        return;
    swap(v[start], v[end]);
    reverseArray(v, start + 1, end - 1);
}

void reverseArraywithOnePointer(vector<int> &v,int i){
    int n = v.size();
    if(i==n/2){ //(i >= 2) is also correct.
        return;
    }
    swap(v[i],v[n-i-1]);
    reverseArraywithOnePointer(v,i+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // reverseArray(v, 0, n - 1);

    reverseArraywithOnePointer(v,0);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }


    return 0;
}