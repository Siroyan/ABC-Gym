#include <bits/stdc++.h>
using namespace std;

int main() {
    
    /* Input */
    int K;
    cin >> K;

    int ans = -1;

    /* Main Logic */
    int an = 0;
    for (int i = 1; i <= K; i++) {
        if (i == 1) {
            an = 7 % K;
        } else {
            an = (an * 10 + 7) % K;
        }

        if (an % K == 0) {
            ans = i;
            break;
        }
    }

    /* Output */
    cout << ans << endl;
    return 0;
}