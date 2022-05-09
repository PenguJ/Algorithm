#include <stdio.h>
#include <stdlib.h>

void ft_swap(int *a, int *b)
{
	int	tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int	N = 0;
	int	*arr = NULL;

	scanf("%d", &N);
	arr = malloc(sizeof(int) * N);
	if (!arr)
		return (-1);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	for (int i = N - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr[j] > arr[j + 1])
				ft_swap(&arr[j], &arr[j + 1]);
	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);
}
