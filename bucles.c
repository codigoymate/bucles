#include <stdio.h>
#include <string.h>

/*
	Utilizando dos bucles, encontrar los 4 primeros Números Perfectos.

		6  = 1 + 2 + 3
		28 = 1 + 2 + 4 + 7 + 14
*/

int main() {
	unsigned long num = 1, j, suma;
	int encontrados = 0;

	while (encontrados < 4) {

		printf("\r%lu", num);

		suma = 0;
		for (j = 1; j < num; j ++) {
			if (num % j != 0) continue;

			suma += j;

			if (suma > num) break;
		}

		if (suma == num) {
			printf("\r%lu\n", num);
			encontrados ++;
		}

		num ++;
	}

	return 0;
}
