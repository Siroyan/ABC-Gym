#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int N;
    cin >> N;
    
    set<string> S;
    rep (i, N) {
        string s;
        cin >> s;
        S.insert(s);
    }
    cout << S.size() << endl;
}