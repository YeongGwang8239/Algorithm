#include <stdio.h>

int main() {
    int n, i, factor;
    scanf("%d", &n);
    while (n!=1) {
        for (i=2; i<=n; i++) {
            if (n%i==0) {
                factor = i;
                break;
            }
        }
        n /= factor;
        printf("%d\n", factor);
    }
    return 0;
}