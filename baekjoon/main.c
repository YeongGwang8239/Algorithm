#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, j, temp;
    scanf("%d %d", &n, &m);
    int *arr = (int*)malloc(4*n);
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n-1; i++) {
		for (j=0; j<n-1; j++) {
			if (arr[j]<arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
    // 2798 블랙잭

    return 0;
}