#include<stdio.h>
void main() {
	int sec,hours,min, time;

	printf("Enter total time passed in seconds:\n");
	scanf_s("%d", &time);

	min = time / 60;
	sec = time % 60;
	hours = min / 60;
	min = min % 60;
	printf("\n%d seconds is equivalent to:\n",time);
	printf("%d:%d:%d [hours : minutes: seconds]",hours,min,sec);
}