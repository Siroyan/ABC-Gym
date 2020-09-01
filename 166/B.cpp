#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int N, K;
    cin >> N >> K;
    
    vector<bool> snukes(N);
    rep(i, N) snukes.at(i) = false;

    rep (i, K) {
        int d;
        cin >> d;
        rep (j, d) {
            int a;
            cin >> a;
            snukes.at(a - 1) = true;
        }
    }
    int ans = 0;
    rep(i, N) if(!snukes.at(i)) ans++;

    /* Output */
    cout << ans << endl;

    return 0;
}