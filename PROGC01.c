#include <stdio.h>

int main(int argc, char **argv) {
	int i = 0;
	while ((argc = getchar()) != EOF) {
		if (argc == '\n') {
			i++;
		}
	}

	printf("%d", ++i);
	return 0;
}
