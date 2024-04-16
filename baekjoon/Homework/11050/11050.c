#include <stdio.h>

int main() {

	int n, k, i;
	int n_fac = 1;
	int k_fac = 1;
	int nk_fac = 1;

	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; i++) {
		n_fac *= i;
	}

	for (i = 1; i <= k; i++) {
		k_fac *= i;
	}

	for (i = 1; i <= n - k; i++) {
		nk_fac *= i;
	}

	printf("%d", n_fac/(k_fac*nk_fac));

	return 0;
}