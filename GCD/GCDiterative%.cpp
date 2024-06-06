#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);

    if (a == 0) return b;
    if (b == 0) return a;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int ans = gcd(a, b);
    cout << ans << endl;

    return 0;
}
