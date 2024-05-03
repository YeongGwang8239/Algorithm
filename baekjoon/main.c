#include <stdio.h>

void Change(int num[], int i, int k) {
    for (int j=0; j<i; j++) {
        
    }
}

int main() {
    char input;
    int i, value, k=1, num[7];
    for (i=0; i<6; i++) {
        scanf("%c", &input);
        value = input; // 문자를 아스키코드로 저장
        if (value>=65) {
            num[i] = value-55;
        }
        else {
            num[i] = value;
        }
        k *= 10;
    }
    Change(num, i, k);
    return 0;
}