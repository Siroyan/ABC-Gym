#include <bits/stdc++.h>
using namespace std;

int main() {
    
    /* Input */
    int N;
    cin >> N;

    string s;
    cin >> s;

    /* Main Logic */
    int trial = 0;
    int r2wCnt = 0, w2rCnt = 0;

    /* とりあえず全部Wの文字列と比較 */
    for (int i = 0; i < N; i++) {
        if (s[i] == 'R') r2wCnt++;
    }
    trial = r2wCnt;

    /* 左からWをRに変化 */
    for (int i = 0; i < N; i++) {
        if (s[i] == 'R') r2wCnt--;
        else w2rCnt++;
        trial = min(trial, max(r2wCnt, w2rCnt));
    }

    /* Output */
    cout << trial << endl;
    return 0;
}