#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	W = 0;
	int H = 0;
	int	*arr = NULL;
	int	N = 0;

	scanf("%d %d %d", &N, &W, &H);
	arr = malloc(sizeof(int) * N);
	if (!arr)
		return (1);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < N; i++)
	{
		if (arr[i] * arr[i] <= H * H + W * W)
			printf("DA");
		else
			printf("NE");
		putchar('\n');
	}
}
