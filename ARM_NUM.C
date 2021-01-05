#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int num, num_copy, dSum = 0;

	system("cls");

	printf("Enter a number(0 to 999): ");
	scanf("%d", &num);

	num_copy = num;

	while(num > 0)
	{
		int dLast = num % 10;
		int dCube = pow(dLast, 3);
		dSum += dCube;
		num /= 10;
	}

	if(num_copy == dSum)
	{
		printf("\nYes, %d is an armstrong number.", num_copy);
	}
	else
	{
		printf("\nNo, %d is not an armstrong number.", num_copy);
	}

	getch();
}