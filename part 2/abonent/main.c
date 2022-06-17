#include "abonent.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	t_abonent	book[100];
	int		flag = 0;
	int		k = 0;
	char	str[100];
	FILE	*stream;

	stream = fopen ("base", "a+");
	if (!stream)
			return (-1);
	while (1)
		{
			printf("\nenter 1: new contact\n");
			printf("\nenter 2: find contact\n");
			printf("\nenter 3: display contact list\n");
			printf("\nenter 4: exit\n_________________________\ninput: ");
			scanf("%d", &flag);
			switch (flag)
			{
				case 1:
						printf("_____________________");
						printf("\nenter phone number: \n");
						scanf("%ld", &book[k].phone_number);
						printf("\nenter contact name: \n");
						scanf("%s", book[k].name);
						k++;
						printf("_____________________");
						break;
				case 2:
						printf("_________________________");
						printf("\nenter name contact:\n\n");
						scanf("%s", str);
						for (int i = 0; i < k; i++)
						{
							if (strcmp(str, book[i].name) == 0)
								{
									printf("\n%s\t%ld\n", book[i].name, 
													book[i].phone_number);
								}
						}
						printf("_________________________");
						break;
				case 3:
						printf("\n_________________________\n");
						for (int i = 0; i < k; i++)
						{
								printf("\n%s\t%ld\n", book[i].name,
											   	book[i].phone_number);
						}
						printf("\n_________________________\n");
						break;
				case 4:
						if (!fwrite (book, sizeof(t_abonent), 1, stream))
							return (-1);
						if (!fclose (stream))
							return (-1);
						return (0);
				default:
						printf("\nerror\ninvalid input");
						return (1);
			}
		}
	return (0);
}
