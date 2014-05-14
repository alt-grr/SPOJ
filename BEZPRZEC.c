#include<stdio.h>
#include<signal.h>

int main(argc, argv) {
	if (scanf("%d%d", (char*)&argc, (char*)&argc+1),
		printf("%d", *((char*)&argc) + *((char*)&argc + 1)),
		raise(0)) {
	}
}
