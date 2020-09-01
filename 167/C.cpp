#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int N, M, X;
    cin >> N >> M >> X;
    
    vector<int> C(N);
    vector<vector<int>> A(N, vector<int>(M));
    rep (i, N) {
        cin >> C.at(i);
        rep (j, M) {
            cin >> A.at(i).at(j);
        }
    }

    /* Main Logic */
    int min_cost = 12345678;

    // Bit all search
    for (int bit = 0; bit < (1 << N); bit++) {
        int sum_cost = 0;
        vector<int> sum_A(M);
        for (int i = 0; i < N; i++) {
            if (bit & (1 << i)) {
                // 金額と理解度を足していく
                sum_cost += C.at(i);
                rep (j, M) sum_A.at(j) += A.at(i).at(j);
            }
        }
        // 理解度がXを超えているか確認
        bool ok_flag = true;
        rep(i, M) if (sum_A.at(i) < X) ok_flag = false;
        // 最小のコストを保存
        if (ok_flag) min_cost = min(min_cost, sum_cost);
    }

    /* Output */
    if (min_cost == 12345678) cout << "-1" << endl;
    else cout << min_cost << endl;

    return 0;
}