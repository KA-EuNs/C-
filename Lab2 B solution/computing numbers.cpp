#include<stdio.h>
void main() {
	int num, max, possum = 0, negsum = 0;
	printf("Enter maximum number to read:\n");
	scanf_s("%d", &max);

	for (int i = 1; i <= max; i++) {
		printf("Enter a number(positive or negative):\n");
		scanf_s("%d", &num);

		if (num >= 0)
			possum = possum + num;
		else if (num < 0)
			negsum = negsum + num;
	}
	printf("\n\nPositive sum is %d\n", possum);
	printf("Negative sum is %d\n", negsum);
}