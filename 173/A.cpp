#include <bits/stdc++.h>
using namespace std;

int main() {
    
    /* Input */
    int N;
    cin >> N;

    vector<int> c(N);
    rep (i, N) {
        cin >> c;
    }



    /* Output */
    cout << (1000 - N % 1000) % 1000 << endl;
    return 0;
}