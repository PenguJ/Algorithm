#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N = 0;
	int size = 0;
	int sum = 0;
	int min = 0;

	scanf("%d", &N);
	for (int val = 1; val <= N; val++, size = 0, sum = 0)
	{
		for (int i = val; i != 0; i /= 10)
			size++;
		for (int i = 0, tmp = val; i < size; i++, tmp /= 10)
			sum += tmp % 10;
		sum += val;
		if (sum == N)
		{
			if (min == 0)
				min = val;
			else
				min = min >= val ? val : min;
		}
	}
	printf("%d\n", min);
}
