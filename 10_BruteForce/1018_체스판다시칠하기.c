#include <stdio.h>
#include <stdlib.h>
#define find_min(a, b) a <= b ? a : b

int main()
{
	int x = 0, y = 0;
	char **arr = NULL;
	int cnt = 0, min = 32;

	scanf("%d %d", &y, &x);
	arr = malloc(sizeof(char *) * (y + 1));
	if (!arr)
		return 1;
	arr[y] = NULL;
	for (int i = 0; i < y; i++)
	{
		arr[i] = malloc(sizeof(char) * (x + 1));
		if (!arr[i])
			return 1;
	}
	for (int i = 0; i < y; i++)
		scanf("%s", arr[i]);
	for (int i = 0; i <= y - 8; i++)
	{
		for (int j = 0; j <= x - 8; j++)
		{
			cnt = 0;
			for (int k = i; k < i + 8; k++)
			{
				for (int l = j; l < j + 8; l++)
				{
					if ((k + l) % 2 == 0 && arr[k][l] == 'B')
						cnt++;
					if ((k + l) % 2 == 1 && arr[k][l] == 'W')
						cnt++;
				}
			}
			cnt = find_min(64 - cnt, cnt); // 최솟값이 blacktop인지 whitetop인지 찾기
			min = find_min(cnt, min); // 보드 이동시키면서 최소값 찾기
		}
	}
	printf("%d", min);
	for (int i = 0; i < y; i++)
		free(arr[i]);
	free(arr);
}
