#include<stdio.h>
void main() {
	int arr[5][5];
	int i = 0, j = -1, k = 0, sw = 1, count = 5;

	while (true) {
		for (int l = 0; l < count; l++) {
			k = k + 1;
			j = j + sw;
			arr[i][j] = k;
		}
		count = count - 1;
		if (count <= 0) break;

		for (int m = 0; m < count; m++) {
			k = k + 1;
			i = i + sw;
			arr[i][j] = k;
		}
		sw *= -1;
	}
	for (int q = 0; q < 5; q++) {
		for (int r = 0; r < 5; r++) {
			printf("%d\t", arr[q][r]);
		}
		printf("\n");
	}

}