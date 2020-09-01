#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    long int A, B, C, K;
    cin >> A >> B >> C >> K;

    /* Main Logic */
    long int useA = min(A, K);
    K = K - useA;

    long int useB = min(B, K);
    K = K - useB;

    long int useC = K;

    long int ans = useA - useC; 

    /* Output */
    cout << ans << endl;

    return 0;
}