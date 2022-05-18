#include <stdio.h>
#include <stdlib.h>

typedef struct t_spec
{
	int W;
	int H;
	int rank;
}	s_spec;

int main()
{
	int		N = 0;
	s_spec	*arr = NULL;

	scanf("%d", &N);
	arr = malloc(sizeof(s_spec) * N);
	if (!arr)
		return 1;
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &arr[i].W, &arr[i].H);
		arr[i].rank = 1;
	}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (i == j)
				continue ;
			else if (arr[i].W < arr[j].W && arr[i].H < arr[j].H)
				arr[i].rank++;
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i].rank);
	free(arr);
}
