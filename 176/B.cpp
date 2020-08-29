#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}

int main() {
    /* Input */
    string N;
    cin >> N;
    
    /* Main Logic */      
    int sum = 0;
    rep(i, (int)N.size()) {
        sum = sum + ctoi(N[i]);
    }

    /* Output */
    if(sum % 9) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}