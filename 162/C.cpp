#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)
using namespace std;

int gcd(int a, int b) {
   if (a % b == 0) return(b);
   else return(gcd(b, a % b));
}

int main() {
    /* Input */
    int k;
    cin >> k;

    /* Main Logic */
    int ans = 0;

    rep (a, k) rep (b, k) rep (c, k) ans += gcd(a, gcd(b, c));

    /* Output */
    cout << ans << endl;
    return 0;
}