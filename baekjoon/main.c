#include <stdio.h>

int main() {
    int time_int;
    double time_float, a, b, v;
    scanf("%lf %lf %lf", &a, &b, &v);
    time_float = (v-a)/(a-b);
    time_int = (v-a)/(a-b);
    if (time_float==time_int) {
        printf("%d", time_int+1);
    }
    else {
        time_float += 2;
        time_int = (int)time_float;
        printf("%d", time_int);
    }
    return 0;
}