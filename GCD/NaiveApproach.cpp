#include <bits/stdc++.h>
using namespace std;

// we'll start from 1 to smallest of the two number until we find a number that divides into both of them

int gcd(int a , int b)
{
    int ans = 1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i == 0 && b%i == 0){
            ans=i;
        }
    }
    return ans;
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin >> a >> b ;
    cout << gcd(a,b) << endl;
    return 0;
}