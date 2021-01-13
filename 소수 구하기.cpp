#include<stdio.h>
void main() {
	int N, i;
	float Ctem, Ftem;

	printf("type a number:");
	scanf_s("%d", &N);

	for (i = 1; i <= N; i++) {
		printf("type a Celsius degree:");
		scanf_s("%f", &Ctem);

		Ftem = (9.0 / 5.0) * Ctem + 32.0;
		printf("fahren degree: %f", Ftem);
	}
}