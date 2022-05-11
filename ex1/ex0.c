#include <stdio.h>

int		main(void)
{
		int		num = 270533154;
		char*	ptr = &num;

		printf("number = %d\n\n1st byte of number = %d\n", num, *ptr);
		ptr++;
		printf("2nd byte of number = %d\n", *ptr);
		ptr++;
		printf("3rd byte of number = %d\n", *ptr);
		ptr++;
		printf("4th byte of number = %d\n", *ptr);

		ptr--;
		*ptr = 5;
		printf("\nchange 3rd byte to = %d\n\nmodified number = %d\n", *ptr,num);
		return (0);
}
