#include <stdio.h>
#include "calc.h"

int		main(void)
{
		int		first_num = 0;
		int		second_num = 0;
		int		result = 0;
		int		flag = 0;

		while (1)
		{
			printf("type first number: \n");
			scanf("%d",&first_num);
			printf("type second number: \n");
			scanf("%d", &second_num);
			printf("1. \"+\"\n");
			printf("2. \"-\"\n");
			printf("3. \"*\"\n");
			printf("4. \"\\\"\n");
			printf("5. exit\n");
			scanf("%d",&flag);
			switch (flag)
			{
				case 1:
						result = sum(first_num, second_num);
						printf("result = %d\n", result);
						break;
				case 2:
						result = subtraction(first_num, second_num);
						printf("result = %d\n", result);
						break;
				case 3:
						result = multiplication(first_num, second_num);
						printf("result = %d\n", result);
						break;
				case 4:
						result = division(first_num, second_num);
						printf("result = %d\n", result);
						break;
				case 5:
						return (0);
				default:
						printf("\nerror\n");
						return (-1);
			}
		}
		return (0);
}
