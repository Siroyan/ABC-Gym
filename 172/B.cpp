#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {    
    /* Input */
    string S, T;
    cin >> S;
    cin >> T;
    /* Main Logic */
    int ans = 0;
    rep (i, S.length()) {
        if (S[i] != T[i]) ans++;
    }
    /* Output */
    cout << ans << endl;
    return 0;
}