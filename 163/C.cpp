#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int n;
    cin >> n;

    vector<int> staff_ids(n);

    for (int i = 1; i < n; i++) {
        int boss;
        cin >> boss;
        staff_ids.at(boss - 1)++;
    }

    rep (i, n) cout << staff_ids.at(i) << endl;

    /* Output */
    return 0;
}