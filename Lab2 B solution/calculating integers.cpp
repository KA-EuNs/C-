#include<stdio.h>
void main() {
	int num, count=0, total = 0, avg=0;

	while (1) {
		printf("type a integer:\n");
		scanf_s("%d", &num);

		if (num >= 30) {
			total = total + num;
			count++;
		}
		else if (num == -1)
			break;
		else if (num < 30)
			continue;
		
	}
	avg = total / count;
	printf("total = %d average = %d", total, avg);
}