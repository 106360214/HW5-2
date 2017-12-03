#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int a[], int x);

int main(void)
{
	int c[10] = { 58, 69, 52, 13, 0, 48, 67, 96, 53, 41 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", c[i]);
	}
	printf("\n");

	printf("³Ì¤j­È¬°¡G%d\n", recursiveMaximum(c, 10));

	system("pause");
	return 0;
}

recursiveMaximum(int a[], int x)
{
	int max;
	if (x > 0)
	{
		max=recursiveMaximum(a, x - 1);
		if (a[x] > max)
		{
			return a[x];

		}
		else
		{
			return max;
		}
	}
	else
	{
		return a[0];
	}
}
