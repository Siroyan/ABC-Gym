#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    /* Input */
    long int N;
    cin >> N;
    
    vector<long int> A(N);
    rep (i, N) {
        cin >> A.at(i);
    }
    
    /* Main Logic */      
    long long int sum = 0;
    long long int mod = 1000000007;
    
    long long int allSum = 0;
    for(int i = 0; i < N; i++) {
        allSum = (allSum + A.at(i)) % mod;
    }

    for(int i = 0; i < N - 1; i++) {
        allSum = allSum - A.at(i);
        if(allSum < 0) allSum = allSum + mod;
        
        sum = sum + ((A.at(i) * allSum) % mod);
    }

    long long int ans = sum % mod;
    /* Output */
    cout << ans << endl;
    return 0;
}