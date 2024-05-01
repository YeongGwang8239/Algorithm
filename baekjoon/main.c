#include <stdio.h>
#include <stdlib.h>

int main() {    
    int n, i, k;
    scanf("%d", &n);
    int *sublist = (int*)malloc(4*n);
    for (i=0; i<n; i++) {
        scanf("%d", sublist[i]);
    }
    
    k = sublist[n-1];
    int *list = (int*)malloc(4*k);
    for (i=0; i<k; i++) {
        list[sublist[i]] = sublist[i];
    }
    free(sublist);
    
    


    return 0;
}