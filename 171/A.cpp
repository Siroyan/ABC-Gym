#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {    
    /* Input */
    int alpha;
    cin >> alpha;
    
    /* Main Logic */
    if (isupper(alpha)) {
        cout << 'A' << endl;
    } else {
        cout << 'a' << endl;
    }

    return 0;
}