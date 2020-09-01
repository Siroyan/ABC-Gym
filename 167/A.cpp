#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    string S, T;
    cin >> S;
    cin >> T;

    /* Main Logic */
    string subT = T.substr(0, T.size() - 1);
    if (S == subT) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}