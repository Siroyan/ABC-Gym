#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    long long int x;
    cin >> x;

    /* Main Logic */
    long long int ans = 0;
    long long int yokin = 100;
    while (yokin < x) {
        yokin += yokin / 100;
        ans++;
    }

    /* Output */
    cout << ans << endl;

    return 0;
}