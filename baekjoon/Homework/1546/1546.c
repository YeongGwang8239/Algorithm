#include <stdio.h> 

int main() {

	int arr[1000], n;
	double average = 0;
	double x;
	int max = arr[0];

	scanf("%d", &n);

	if (n >= 1 && n <= 1000) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
	}

	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	for (int i = 0; i < n; i++) {
		x = (double)arr[i] / (double)max * 100;
		average += x;
	}
	
	printf("%lf", average/n); // Visual Studio에서 나오는 값과 VScode에서 나오는 값이 다릅니다.

	return 0;
}