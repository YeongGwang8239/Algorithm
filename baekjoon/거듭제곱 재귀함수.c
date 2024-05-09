#include <stdio.h>

int Cal(int n, int k, int temp) {
    if (k!=1) {
        temp *= n;
        k--;
        return Cal(n, k, temp);
    }
    else {
        return temp;
    }
}

int main() {
    int n, k, temp;
    printf("정수를 입력하시오 : ");
    scanf("%d", &n);
    temp = n;
    printf("거듭제곱 수를 입력하시오 : ");
    scanf("%d", &k);
    printf("%d의 %d승은 %d 입니다.", n, k, Cal(n, k, temp));
    return 0;
}