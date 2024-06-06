#include <bits/stdc++.h>
using namespace std;

void update( int &a){
    a=a*2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 5;
    cout << x << endl;
    update(x);
    cout << x << endl;

    
    return 0;
}