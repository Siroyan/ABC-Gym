#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int N, M;
    cin >> N >> M;
    vector<long int> H(N);
    rep(i, N) cin >> H.at(i);

    vector<long int> max_hights(N);
    rep(i, N) max_hights.at(i) = 0;

    vector<int> A(M); 
    vector<int> B(M);
    rep(i, M) cin >> A.at(i) >> B.at(i);

    /* Main Logic */
    int nice = 0;
    long int max_height = 0;
    rep(i, M) {
        max_hights.at(A.at(i) - 1) = max(max_hights.at(A.at(i) - 1), H.at(B.at(i) - 1));
        max_hights.at(B.at(i) - 1) = max(max_hights.at(B.at(i) - 1), H.at(A.at(i) - 1));
    }

    rep(i, N) if (max_hights.at(i) < H.at(i)) nice++;

    /* Output */
    cout << nice << endl;

    return 0;
}