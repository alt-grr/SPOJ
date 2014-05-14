#include<stdio.h>
#include<string.h>
char liczba1[1001];
char liczba2[1001];
char znak[3];

int main(void) {
	int wynik, len1, len2;
	while (scanf("%s %s %s", liczba1, znak, liczba2) != EOF) {
		len1 = strlen(liczba1);
		len2 = strlen(liczba2);

		if (len1 == len2)
			wynik = strcmp(liczba1, liczba2);
		else
			wynik = (len1 - len2);

		switch(znak[0]) {
				case '=':
					wynik = !wynik;
				break;
				case '!':
					wynik = !!wynik;
				break;
				case '>':
					wynik = (wynik > 0);
				break;
				case '<':
					wynik = (wynik < 0);
				break;
		}
		printf("%d\n", wynik);
	}
	return 0;
}
