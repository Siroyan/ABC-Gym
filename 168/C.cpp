#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.141592653589793238
using namespace std;

int main() {
    /* Input */
    int A, B, H, M;
    cin >> A >> B >> H >> M;
   
    /* Main Logic */
    long double ans;
    double m_theta = (M * 2.0 * PI) / 60.0;
    double h_theta = ((60.0 * H + M) * 2.0 * PI) / 720.0;

    double theta = min(abs(m_theta - h_theta), 2 * PI - abs(m_theta - h_theta));

    /* cosine formula */
    ans = A * A + B * B - 2.0 * A * B * cos(theta);

    /* Output */    
    cout << fixed << setprecision(18) << sqrt(ans) << endl;
}