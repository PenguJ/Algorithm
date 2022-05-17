#include <stdio.h>

int main()
{
	int	N = 0;
	int i = 7;
	int arr[2][5] = {0};
	int	area = 0;
	int num = 0;
	int before_num = 0;
	int before_len = 0;
	int	first_len = 0;
	int len = 0;

	scanf("%d", &N);
	while (--i)
	{
		scanf("%d", &num);
		if (!arr[0][num])
		{
			scanf("%d", &arr[0][num]);
			len = arr[0][num];
			if (arr[0][0] == 0)
				first_len = len;
		}
		else
		{
			scanf("%d", &arr[1][num]);
			len = arr[1][num];
			if (arr[0][0] == 0)
				first_len = len;
		}
		arr[0][0] = 1;
		if ((before_num == 4 && num != 2) \
			|| (before_num == 2 && num != 3) \
			|| (before_num == 3 && num != 1) \
			|| (before_num == 1 && num != 4))
			area = len * before_len;
		before_len = len;
		before_num = num;
	}
	if (area == 0)
		area = len * first_len;
	area -= (arr[0][1] + arr[1][1]) * (arr[0][3] + arr[1][3]);
	area *= -1;
	printf("%d\n", area * N);
}
