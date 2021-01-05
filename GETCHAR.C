#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	char line[70], ch;
	int i = 0;

	system("cls");

	printf("Enter a string: \n");

	do
	{       ch  = getchar();
		line[i] = ch;
		i++;
	}
	while(line[i] != '\n');

	line[i] = '\0';

	printf("The string: %s", line);

	getch();

}