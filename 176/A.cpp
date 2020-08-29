#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int N, X, T;
    cin >> N >> X >> T;
    
    /* Main Logic */      
    int num = 0;
    if (N % X) num = N / X + 1;
    else num = N / X;

    /* Output */
    cout << num * T << endl;
    return 0;
}