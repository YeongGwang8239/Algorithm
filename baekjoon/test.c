#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int n, x, arr[10000];

    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (x>arr[i]) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}