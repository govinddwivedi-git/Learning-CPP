#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){

    if(a==0) return b;
    if(b==0) return a;

    while(a!=b){
        if(a>b) a = a-b;
        else b = b-a;
    }
    return a; // or return b; since a and b are equal at this point

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin >> a >> b;
    int ans = gcd(a,b);
    cout << ans << endl;
    
    return 0;
}