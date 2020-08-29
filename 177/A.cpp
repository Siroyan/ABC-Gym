#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    double D, T, S;
    cin >> D >> T >> S;
    
    /* Main Logic */      
    double time = D / S;
    /* Output */
    if(T < time) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}