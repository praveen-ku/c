#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	char country[20] = "United kingdom";

	system("cls");

	printf("\n\n");
	printf("*1234567890 0987654321*\n");
	printf("	\n");
	printf("%23s\n", country);
	printf("%5s\n", country);
	printf("%15.6s\n", country);
	printf("%-15.6s\n", country);


	getch();
}