#include<stdio.h>
void main() {
	char stars[10][10] = { '!','@','#','$','%','^','&','*','(',')' };
	int i, j;
	
	for (i = 1 ; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			stars[i][j] = stars[i-1][9-j];
		}
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%c", stars[i][j]);
		}
		printf("\n");
	}

}