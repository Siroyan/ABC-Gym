#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int N;
    cin >> N;
   
    /* Main Logic */
    int ones_place = N % 10;

    /* Output */
    if (ones_place == 0) cout << "pon" << endl;
    if (ones_place == 1) cout << "pon" << endl;
    if (ones_place == 2) cout << "hon" << endl;
    if (ones_place == 3) cout << "bon" << endl;
    if (ones_place == 4) cout << "hon" << endl;
    if (ones_place == 5) cout << "hon" << endl;
    if (ones_place == 6) cout << "pon" << endl;
    if (ones_place == 7) cout << "hon" << endl;
    if (ones_place == 8) cout << "pon" << endl;
    if (ones_place == 9) cout << "hon" << endl;
    
    return 0;
}