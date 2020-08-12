#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {    
    /* Input */
    long long int N, M, K;
    cin >> N >> M >> K;
    
    vector<long long int> A(N);
    vector<long long int> B(M);
    rep (i, N) {
        cin >> A.at(i);
    }
    rep (i, M) {
        cin >> B.at(i);
    }

    /* Main Logic */
    vector<long long int> sumA(N+1);
    vector<long long int> sumB(M+1);
    rep (i, N+1) {
        if (i == 0) sumA.at(i) = 0;
        else sumA.at(i) = sumA.at(i-1) + A.at(i-1);
    }
    rep (i, M+1) {
        if (i == 0) sumB.at(i) = 0;
        else sumB.at(i) = sumB.at(i-1) + B.at(i-1);
    }

    int ans = 0;
    int j = M;
    for (int i = 0; i < N + 1; i++) {
        if (sumA.at(i) > K) break;
        while ( sumB.at(j) > K - sumA.at(i) ) {
            j--;
        }
        ans = max(ans, i + j);
    }

    /* Output */
    cout << ans << endl;
    return 0;
}