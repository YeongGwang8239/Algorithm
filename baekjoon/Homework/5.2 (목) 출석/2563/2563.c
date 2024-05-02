#include <stdio.h>

int main() {

    int arr[101][101] = {0};
    int n, x, y, size = 0;

    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        scanf("%d %d", &x, &y);
        for (int j=y; j<=y+9; j++) {
            for (int r=x; r<=x+9; r++) {
                if (arr[r][j]==0) {
                    arr[r][j] = 1;
                    size++;
                }
            }
        }
    }

    printf("%d\n", size);
    return 0;
}