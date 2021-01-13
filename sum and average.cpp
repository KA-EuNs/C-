#include<stdio.h>
void main() {
	int firCount = 0, secCount = 0;
	int firSum = 0, secSum = 0;
	int grade;

	printf("type a grade:");
	scanf_s("%d", &grade);
	while (grade != -1)
	{
		if (grade >= 10) {
			firSum = firSum + grade;
			firCount++;
		}
		else if (grade < 10) {
			secSum = secSum + grade;
			secCount++;
		}

		printf("type a grade:");
		scanf_s("%d", &grade);
	}
	printf("firSum = %d firAvg = %d\n", firSum, firSum / firCount);
	printf("secSum = %d secAvg = %d\n", secSum, secSum / secCount);


}