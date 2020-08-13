#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    vector<int> x(5);
    cin >> x.at(0) >> x.at(1) >> x.at(2) >> x.at(3) >> x.at(4);

    /* Main Logic */
    int ans = 0;
    rep (i, 5) {
        if (i+1 != x.at(i)) {
            ans = i + 1;
            break;
        }
    }
    
    /* Output */
    cout << ans << endl;
    return 0;
}