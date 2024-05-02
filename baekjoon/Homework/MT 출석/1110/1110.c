#include <stdio.h>

int main() {

	int n, x, new_num, num,count = 0;

	scanf("%d", &n);

	if (n<10) {
		n *= 10;
	}

	num = n;

	while (1) {
		x = (n / 10) + (n % 10);
		new_num = ((n % 10) * 10) + (x % 10);
		if (new_num!=num) {
			n = new_num;
			count++;
			continue;
		}
		else {
			printf("%d", count+1);
			break;
		}
	}

	return 0;
}