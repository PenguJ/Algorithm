#include <stdio.h>

int main()
{
	int		N = 0;
	int		val = 666;
	int		save = 0;
	int		check = 0;

	scanf ("%d", &N);

	while (N != 0)
	{
		check = val;
		while (check != 0)
		{
			if (check % 1000 == 666)
			{
				save = val;
				N--;
				break ;
			}
			check /= 10;
		}
		val++;
	}
	printf("%d\n", save);
}
