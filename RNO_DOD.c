#include<stdio.h>

int main(void) {
	int t, i, n, tmp;
	scanf("%d", &t);

	while (t--) {
		int suma = 0;
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d", &tmp);
			suma += tmp;
		}
		printf("%d\n", suma);
	}

	return 0;
}
