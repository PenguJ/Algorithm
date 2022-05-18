#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N = 0, M = 0;
	int max = 0, sum = 0;
	int *arr = NULL;

	scanf("%d %d", &N, &M);
	arr = malloc(sizeof(int) * N);
	if (!arr)
		return 1;
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < N - 2; i++)
		for (int j = i + 1; j < N - 1; j++)
			for (int k = j + 1; k < N; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				max = max <= sum && sum <= M ? sum : max;
			}
	printf("%d\n", max);
	free(arr);
}
