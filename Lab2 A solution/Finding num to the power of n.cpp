#include<stdio.h>
void main() {
	float N, total = 1;
	int P, i;


	printf("type a number:");
	scanf_s("%f", &N);

	printf("type a integer:");
	scanf_s("%d", &P);

	if (P > 0) {
		for (i = 1; i <= P; i++) {
			total = total * N;
		}
		printf("total = %f", total);
	}
	else
		printf("invalid input");
}