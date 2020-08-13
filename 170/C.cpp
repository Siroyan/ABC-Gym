#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int X, N;
    cin >> X >> N;

    vector<int> ng(N);
    rep (i, N) {
        cin >> ng.at(i);
    }

    /* Main Logic */   
    // Forbidden Listを除いた数列を作成
    vector<int> ok(100 - N + 2);
    int tmpIndex = 1;
    
    ok.at(0) = 0;
    rep (i, 100) {
        bool ngMatchFlag = false;
        /* NG Listに一致するものがあるかどうか */
        rep (j, N) {
            if (ng.at(j) == i + 1) {
                ngMatchFlag = true;
                break;
            }
        }
        if(!ngMatchFlag) {
            ok.at(tmpIndex) = i + 1;
            tmpIndex++;
        }
    }
    ok.at(tmpIndex) = 101;

    int preDiff = 100;
    int nowDiff = 100;
    int preI = 0;

    rep (nowI, 100 - N + 2) {
        nowDiff = abs(ok.at(nowI) - X);
        if ( (nowDiff < preDiff) || (nowDiff == preDiff && ok.at(nowI) < ok.at(preI)) ) {
            preDiff = nowDiff;
            preI = nowI;
        }
    }
    
    /* Output */
    cout << ok.at(preI) << endl;
    return 0;
}