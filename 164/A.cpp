#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int s, w;
    cin >> s >> w;

    if (s <= w) cout << "unsafe" << endl;
    else cout << "safe" << endl;

    return 0;
}