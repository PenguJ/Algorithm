#include <stdio.h>
#include <math.h>

void ft_hanoi(int N, int start, int to, int via)
{
	if (N == 0)
		return ;
	ft_hanoi (N - 1, start, via, to);
	printf("%d %d\n", start, to);
	ft_hanoi (N - 1, via, to, start);
}

int main()
{
	int N = 0;
	int start = 1, via = 2, to = 3;

	scanf("%d", &N);
	printf("%.0f\n", pow(2, N) - 1);
	ft_hanoi(N, start, to, via);
}
