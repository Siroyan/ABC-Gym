#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    string S, T;
    cin >> S;
    cin >> T;
    
    /* Main Logic */      
    int ans = T.size();
    rep(i, (int)S.size() - (int)T.size() + 1) {
        int times = 0;
        rep(j, (int)T.size()) {
            if (S[i+j] != T[j]) {
                times++;
            }
        }
        ans = min(ans, times);
    }

    /* Output */
    cout << ans << endl;
    return 0;
}