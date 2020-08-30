#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int N;
    cin >> N;
    
    vector<long long int> A(N);
    rep (i, N) {
        cin >> A.at(i);
    }

    /* Main Logic */
    long long int ans = 1;
    
    // 予め0を検索
    rep (i, N) {
        if (A.at(i) == 0) {
            cout << 0 << endl;
            return 0;
        }
    }
    // 本処理
    rep (i, N) {       
        if (A.at(i) <= 1000000000000000000 / ans) {
            ans *= A.at(i);
        } else {
            ans = -1;
            break;
        }
    }

    /* Output */
    cout << ans << endl;
    return 0;
}