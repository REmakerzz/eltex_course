#include <stdio.h>

int		main(void)
{
		int		n;
		int		count;
		int		array[100][100];

		n = 0;
		count = 1;
		printf("enter a positive non-zero number and no more than 100 n = ");
		scanf("%d", &n);
		if ((n <= 0) || (n > 100))
		{
				printf("error\nwrong number");
				return (0);
		}
		for (int i = 1; i <= n; i++)
		{
				for (int j = 1; j <= n; j++)
				{
						array[i - 1][j - 1] =  count;
						count++;
				}
		}
		for (int i = 0; i < n; i++)
		{
				for (int j = 0; j < n; j++)
				{
					printf("%d\t", array[i][j]);
				}
				printf("\n");
		}
		return (0);
}
