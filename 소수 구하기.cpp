#include<stdio.h>
void main() {
	int sum = 0;
	int j=0;
	for (int i = 110; i <= 10000; i++) {
		
		
		for (j = 110; j <= i; j++) {
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
			sum = sum + i;
	}
	printf("sum from 110 to 10000 = %d ", sum);
}