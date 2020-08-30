#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    int N;
    cin >> N;
    
    vector<long long int> A(N);
    rep (i, N) {
        cin >> A.at(i);
    }

    /* Main Logic */      
    long long int steps_sum = 0;
    long long int front_height = 0;

    rep (i, N) {
        if (front_height > A.at(i)) steps_sum += front_height - A.at(i);
        else front_height = A.at(i);
    }

    /* Output */
    cout << steps_sum << endl;
    return 0;
}