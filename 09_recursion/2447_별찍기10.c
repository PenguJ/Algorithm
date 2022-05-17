#include <stdio.h>

void ft_star(int N, int x, int y)
{
	if ((x / N) % 3 == 1 && (y / N) % 3 == 1)
		putchar(' ');
	else if (!(N / 3))
		putchar('*');
	else
		ft_star(N / 3, x, y);
}

int	main()
{
	int	N = 0;

	scanf("%d", &N);
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
			ft_star(N, x, y);
		putchar('\n');
	}
}
