#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	int num1, num2, num3, gNum;

	system("cls");

	printf("Enter the first number: ");
	scanf("%d", &num1);

	printf("Enter the second number: ");
	scanf("%d", &num2);

	printf("Enter the third number: ");
	scanf("%d", &num3);

	if(num1 > num2)
	{
		if(num1 > num3)
		{
			gNum = num1;
		}
		else
		{
			gNum = num3;
		}
	}
	else
	{
		if(num2 > num3)
		{
			gNum = num2;
		}
		else
		{
			gNum = num3;
		}
	}

	printf("\nThe greatest number: %d", gNum);

	getch();
}

