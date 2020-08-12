#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {    
    /* Input */
    int N;
    cin >> N;
    
    vector<int> A(N);
    rep (i, N) {
        cin >> A.at(i);
    }
    
    /* Main Logic */
    sort(A.begin(), A.end(), greater<int>());
    vector<int> B = {};
    vector<int>::iterator it;
    
    it = B.begin();
    B.insert(it, 1, A.at(0));
    it++;
    B.insert(it, 1, A.at(1));

    int nextInsertPosition = 0;
    int nowComfort = 0;
    rep (i, N) {
        nowComfort = max(nowComfort, min(B.at(i), B.at(i+1)));
    }

    int ans = 0;
    
    /* Output */
    cout << ans << endl;
    return 0;
}