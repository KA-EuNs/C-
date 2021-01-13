#include<stdio.h>
void main() {
	int num;

	printf("type a number:\n");
	scanf_s("%d", &num);

	for (int i = num; i >0; i--) {
		printf("\n");
		for (int j = i; j > 0; j--) {
			printf("*");
		}
	}

}