#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    long long int X, K, D;
    cin >> X >> K >> D;
    X = abs(X);

    /* Main Logic */
    long long int straight = min(K, X / D);
    K -= straight;
    X -= straight * D;

    long long int ans = 0;
    if (K % 2 == 0) {
        ans = X;
    } else {
        if(abs(X-D) >= abs(X+D)) X = X + D;
        else if(abs(X-D) <= abs(X+D)) X = X - D;
        ans = X;
    }

    /* Output */
    cout << abs(ans) << endl;
    return 0;
}