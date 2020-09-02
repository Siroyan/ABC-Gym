#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    /* Main Logic */
    while (a > 0 && c > 0) {
        c -= b;
        if (c <= 0) {
            cout << "Yes" << endl;
            break;
        }
        a -= d;
        if (a <= 0) {
            cout << "No" << endl;
            break;
        }
    }
    return 0;
}