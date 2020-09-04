#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int n;
    cin >> n;

    bool has_seven = false;
    int digit_1  = n % 10;
    n /= 10;
    int digit_2 = n % 10;
    n /= 10;
    int digit_3  = n % 10;

    if (digit_1 == 7) has_seven = true;
    if (digit_2 == 7) has_seven = true;
    if (digit_3 == 7) has_seven = true;

    if (has_seven) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}