#include<stdio.h>

void main() {
	int N, i;
	float Ctem, Ftem;

	printf("type a number(N>4):");
	scanf_s("%d", &N);

	if (N < 4)
		printf("invalid input");
	else if (N >= 4) {
		for (i = 1; i <= N; i++) {
			printf("type a Celsius degree:");
			scanf_s("%f", &Ctem);

			Ftem = (9.0 / 5.0) * Ctem + 32.0;
			printf("fahren degree: %f\n", Ftem);
		}
	}
}