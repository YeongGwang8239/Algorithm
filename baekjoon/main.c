#include <stdio.h>

int Cal() {
    return 1;
}

int main() {
    int sum=0;
    for (int i=0; i<3; i++) {
        sum += Cal();
    }
    printf("%d", sum);
    return 0;
}