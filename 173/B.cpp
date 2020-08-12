#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    
    /* Input */
    int N;
    cin >> N;

    int AC = 0, WA = 0, TLE = 0, RE = 0;
    rep (i, N) {
        string s;
        cin >> s;
        if (s == "AC") AC++;
        if (s == "WA") WA++;
        if (s == "TLE") TLE++;
        if (s == "RE") RE++;
    }

    /* Output */
    cout << "AC x " << AC << endl;
    cout << "WA x " << WA << endl;
    cout << "TLE x " << TLE << endl;
    cout << "RE x " << RE << endl;
    return 0;
}