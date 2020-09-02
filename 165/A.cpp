#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int k, a, b;
    cin >> k;
    cin >> a >> b;

    /* Main Logic */
    int largest_k = (b / k) * k;
    if (a <= largest_k) cout << "OK" << endl;
    else cout << "NG" << endl;

    return 0;
}