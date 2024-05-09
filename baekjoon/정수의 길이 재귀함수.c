#include <stdio.h>

int Cal(int n, int temp, int count) {
    if (n/temp==0) {
        temp /= 10;
        count--;
        return Cal(n, temp, count);
    }
    else {
        return count;
    }
}

int main() {
    int n, count=10, temp = 1000000000; // int형의 최대 길이인 10자리
    printf("정수를 입력하시오 : ");
    scanf("%d", &n);
    printf("자리수의 개수 : %d\n", Cal(n, temp, count));
    return 0;
}