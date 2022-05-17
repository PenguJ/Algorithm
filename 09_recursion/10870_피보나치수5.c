#include <stdio.h>

int	ft_fibo(int N)
{
	if (N <= 1)
		return N;
	return (ft_fibo(N - 1) + ft_fibo(N - 2));
}

int main()
{
	int	N = 0;

	scanf("%d", &N);
	printf("%d\n", ft_fibo(N));
}
