#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int n;
    cin >> n;

    /* Main Logic */
    long int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0) continue;
        ans += i;
    }

    /* Output */
    cout << ans << endl;
    return 0;
}