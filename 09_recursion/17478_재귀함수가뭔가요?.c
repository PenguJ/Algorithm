#include <stdio.h>

void ft_tab(int t)
{
    while (t-- > 0)
		printf("____");
}

void ft_recul(int N, int t, char *str1, char *str2, char *str3, char *str4, char *str5, char *str6)
{
	ft_tab(t);
	printf("%s\n", str1);
	if (N == 0)
	{
	ft_tab(t);
	printf("%s\n", str5);
	}
	if (N != 0)
	{
		ft_tab(t);
		printf("%s\n", str2);
		ft_tab(t);
		printf("%s\n", str3);
		ft_tab(t);
		printf("%s\n", str4);
		ft_recul(N - 1, t + 1, str1, str2, str3, str4, str5, str6);
	}
		ft_tab(t);
		printf("%s\n", str6);
}

int main()
{
	int		N = 0;
	char	*str1 = "\"재귀함수가 뭔가요?\"";
	char    *str2 = "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.";
	char    *str3 = "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.";
	char    *str4 = "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"";
	char    *str5 = "\"재귀함수는 자기 자신을 호출하는 함수라네\"";
	char    *str6 = "라고 답변하였지.";

	scanf("%d", &N);
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	ft_recul(N, 0, str1, str2, str3, str4, str5, str6);
}
