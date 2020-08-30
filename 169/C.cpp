#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    long long A;
    long long b1, b2;
    char ch;
    cin >> A >> b1 >> ch >> b2;
    
    /* Main Logic */
    long long B = b1 * 100 + b2;
    long long ans = (A * B) / 100;

    /* Output */
    cout << ans << endl;
    return 0;
}