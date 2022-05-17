#include <stdio.h>
#include <stdlib.h>

void ft_merge_sort(int left, int right)
{
	int	mid = (left + right) / 2;
	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right)
	{
		if (arr[i] > arr[j])
			result(

	}

}

void ft_partition(int left, int right)
{
	int mid = 0;

	if (left < right)
	{
		mid = (left + right) / 2;
		ft_partition(left, mid);
		ft_partition(mid + 1, right);
		merges(left, right);

	}

}

int main()
{
	int	*arr = NULL;
	int	N = 0;

	scanf("%d", &N);
	arr = malloc(sizeof(int) * N);
	if (!arr)
		return (1);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	


	free(arr);
}
