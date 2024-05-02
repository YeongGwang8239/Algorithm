#include <stdio.h>
#include <stdlib.h>

int compare(const int* a, const int* b) {
	return(*a - *b);
}

int search(int list[], int arr[], int count[], int n, int i) {
	int low = 0, high = n - 1, mid;
	while (low<=high) {
		mid = (low+high) / 2;
		if (arr[i] == list[mid]) {
			count[i]++;
			return 1;
		}
		else if (arr[i]>list[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return 0;
}

int main() {
	int n, m, i;
	scanf("%d", &n);
	int *list = (int*)malloc(4 * n);
	for (i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}
	qsort(list, n, 4, compare);

	scanf("%d", &m);
	int *arr = (int*)malloc(4 * m);
	int *count = (int*)malloc(4 * m);
	for (i = 0; i < m; i++) {
		count[i] = 0;
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < m; i++) {
		search(list, arr, count, n, i);
	}
	for (i = 0; i < m; i++) {
		printf("%d ", count[i]);
	}
    free(list);
    free(arr);
    free(count);
	return 0;
}