#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);

	int arr[50][50];
	// √ ±‚»≠
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = 0;
		}
	}

	// 1
	for (int k = 0; k < 1;  k++)
	{
		arr[0][k] = k+1;
	}

	// 2
	for (int a = 1; a < n; a++)
	{
		arr[a][n] = n + a;
	}

	// 3
	for (int b = 1; b < n; b++) {
		arr[n - 1][b - 1] = 0;
	}
}