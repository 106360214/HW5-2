#include <stdio.h>
#include <stdlib.h>

char stringReverse(char s[], int x);

int main(void)
{
	int i;
	char a[10] = {'A','B','C','D','E','F','G','H','I'};

	printf("排序前：");
	for (i = 0; i < 10; i++)
	{
		printf("%c", a[i]);
	}

	printf("\n排序後：");
	stringReverse(a, 0);
	printf("\n");

	system("pause");
	return 0;
}

char stringReverse(char s[], int x)
{
	if (s[x] != '\0')
	{
		stringReverse(s, x + 1);
		printf("%c", s[x]);
	}
}