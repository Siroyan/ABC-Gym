#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    rep (i, m) {
        cin >> a.at(i);
    }

    /* Main Logic */
    int ans = 0;
    int total_time = 0;
    rep (i, m) {
        total_time += a.at(i);
        ans = n - total_time;
        if (ans < 0) {
            ans = -1;
            break;
        }
    }

    /* Output */
    cout << ans << endl;
    return 0;
}