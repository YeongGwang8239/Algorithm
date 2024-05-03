#include <stdio.h>

int main() {
    int i, j, temp, list[3];
    for (i=0; i<3; i++) {
        scanf("%d", &list[i]);
    }
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            if (list[j]>list[j+1]) {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
    printf("%d\n", list[1]);
    return 0;
}