#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {    
    /* Input */
    int H, W, K;
    cin >> H >> W >> K;
    
    vector<vector<char>> masu(H, vector<char>(W));
    rep (i, H) {
        rep (j, W) {
            cin >> masu.at(i).at(j);
        }
    }
    
    /* Main Logic */
    int ans = 0;
    rep (ib, 1 << H) {
        rep (jb, 1 << W) {
            /* ex. ib == 001001, jb == 000101 */
            int cnt = 0;
            rep (i, H) {
                rep (j, W) {
                    if (ib >> i & 1) continue;
                    if (jb >> j & 1) continue;
                    if (masu.at(i).at(j) == '#') cnt++;
                }
            }
            if (cnt == K) ans++;
        }
    }

    /* Output */
    cout << ans << endl;
    return 0;
}