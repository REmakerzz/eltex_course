#include <stdio.h>

int		main(void)
{
		int		size;
		int		array[100];

		size = 0;
		printf("enter a positive non-zero and no more than 100 number = ");
		scanf("%d", &size);
		if ((size <= 0) || (size > 100))
		{
				printf("error\nwrong number");
				return (0);
		}
		for (int i = 1; i <= size; i++)
				array[i - 1] = i;
		for (int i = 0; i < size; i++)
				printf("%d\t", array[i]);
		printf("\n");
		for (int i = 0; i < size; i++)
		{
				for (int j = size - 1; j > i; j--)
				{
						if (array[j] > array[i])
						{
								int temp;

								temp = array[i];
								array[i] = array[j];
								array[j] = temp;
						}
				}	
		}
		for (int i = 0; i < size; i++)
				printf("%d\t", array[i]);
		return (0);
}
