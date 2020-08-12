#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    long long int N;
    cin >> N;
        
    /* Main Logic */
    long long int an = 1;
    long long int sumAn = 0;

    string ans = "";

    int i = 0;
    while (1) {
        an *= 26;
        sumAn += an;
        if (N <= sumAn) {
            // N番目の数がいる項の一つ前の項のおしりの番目
            long long int tailOfAn_1 = sumAn - an;
            // N番目の数がいる項の中でのNの番目を求る(0スタート)
            long long int smallN = N - (tailOfAn_1 + 1);
            rep (j, i + 1) {
                ans.append(1, smallN % 26 + 'a');
                smallN /= 26;
            }
            break;
        }
        i++;
    }

    reverse(ans.begin(), ans.end());
    
    /* Output */
    cout << ans << endl;
    return 0;
}