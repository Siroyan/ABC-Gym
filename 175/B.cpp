#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int N;
    cin >> N;
    
    vector<int> L(N);
    rep (i, N) {
        cin >> L.at(i);
    }
    
    /* Main Logic */
    sort(L.begin(), L.end());
    int ans = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if (L.at(i) + L.at(j) > L.at(k) && L.at(k) + L.at(i) > L.at(j) && L.at(j) + L.at(k) > L.at(i)) {
                    if (!(L.at(i) == L.at(j) || L.at(j) == L.at(k) || L.at(k) == L.at(i))) {
                        ans++;
                    }
                } else {
                    break;
                }
            }
        }
    }

    /* Output */
    cout << ans << endl;
    return 0;
}