#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    string S;
    cin >> S;
    
    /* Main Logic */   
    int ans = 0;
    if (S == "SSS") ans = 0;
    
    if (S == "RSS") ans = 1;
    if (S == "SRS") ans = 1;
    if (S == "SSR") ans = 1;

    if (S == "RRS") ans = 2;
    if (S == "SRR") ans = 2;    
    if (S == "RSR") ans = 1;
    
    if (S == "RRR") ans = 3;

    /* Output */
    cout << ans << endl;
    return 0;
}