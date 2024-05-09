#include <stdio.h>

int Cal(int x, int y) {
    int temp = y;
    y = x%y;
    x = temp;
    if (y==0) {
        return x;
    }
    else {
        return Cal(x, y);
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if (y>=x) {
        printf("%d", Cal(y, x));
    }
    else {
        printf("%d", Cal(x, y));
    }
    return 0;
}