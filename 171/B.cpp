#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int N, K;
    cin >> N >> K;
    
    vector<int> p(N);

    rep (i, N) {
        cin >> p.at(i);
    }

    /* Main Logic */
    int ans = 0;

    sort(p.begin(), p.end());

    rep (i, K) {
        ans += p.at(i);
    }

    /* Output */
    cout << ans << endl;
    return 0;
}