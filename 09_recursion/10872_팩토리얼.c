#include <stdio.h>

int	ft_factorial(int N, int val)
{
	if (N == 0)
		return val;
	val *= N;
	return (ft_factorial(N - 1, val));
}

int main()
{
	int	N = 0;

	scanf("%d", &N);
	printf("%d\n", ft_factorial(N, 1));
}
