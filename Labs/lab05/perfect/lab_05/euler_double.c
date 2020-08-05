#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    double e = 1;
    int divisor = 1;
    for (int i = 1; i <= n; i++) {
        printf("%d: ", i);
        divisor *= i;
        e += ((double) 1 / divisor);
        printf("%.20f\n", e);
    }
    return 0;
}
