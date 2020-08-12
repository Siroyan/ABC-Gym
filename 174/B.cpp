#include <stdio.h>
#include <math.h>

int main() {
    unsigned int n = 0;
    unsigned int d = 0;

    unsigned int ok = 0;

    scanf("%d %d", &n, &d);

    long* x = new long[n];
    long* y = new long[n];
    long double* r = new long double[n];

    for(int i = 0; i < n; i++) {
        scanf("%lu %lu", &(x[i]), &(y[i]));
        r[i] = sqrt(x[i] * x[i] + y[i] * y[i]);

        if(r[i] <= d) ok++;
    }
    printf("%d\n", ok);

    return 0;
}
