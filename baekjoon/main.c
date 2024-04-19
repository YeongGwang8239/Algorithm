#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, j, count_factor, count_prime, d=0, sum=0;
    scanf("%d", &n);
    scanf("%d", &m);
    for (i=n; i<=m; i++) {
        count_factor = 0;
        count_prime = 0;
        for (j=2; j<n; j++) {
            if (n%j==0) {
                count_factor++;
                if (count_factor>2) {
                    break;
                }
            }
            break;
        }
        count_prime++;
    }

    int *arr = (int*)malloc(4*count_prime);
    for (i=n; i<=m; i++) {
        count_factor = 0;
        for (j=2; j<n; j++) {
            if (n%j==0) {
                count_factor++;
                if (count_factor>2) {
                    break;
                }
            }
            break;
        }
        arr[d] = i;
        d++;
    }
    for (i=0; i<count_prime; i++) {
        sum += arr[i];
    }
    printf("%d", sum);

    return 0;
}