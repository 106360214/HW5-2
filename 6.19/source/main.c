#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x, y, z, i;
	int a[11] = {0};

	srand(time(NULL));

	for (i = 0; i < 36000; i++)
	{
		x = rand() % 6 + 1;
		y = rand() % 6 + 1;
		z = x + y;
		a[z - 2]++;
	}

	for (i = 2; i < 13; i++)
	{
		printf("%2d¡G%d\n", i, a[i-2]);
	}

	system("pause");
	return 0;
}