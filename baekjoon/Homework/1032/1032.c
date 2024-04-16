#include <stdio.h>
#include <string.h>

int main() {

	char sample[51], arr[51];
	int n;

	scanf("%d", &n);
	scanf("%s", sample);

	for (int i = 1; i < n; i++) {
		scanf("%s", arr);
		for (int j = 0; j < strlen(sample); j++) {
			if (sample[j]!=arr[j]) {
				sample[j] = '?';
			}
		}
	}

	printf("%s", sample);

	return 0;
}