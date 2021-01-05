#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	int num1, num2, malti;

	system("cls");

	printf("Enter the first number: ");
	scanf("%d", &num1);

	printf("Enter the second number: ");
	scanf("%d", &num2);

	malti = num1 * num2;

	printf("%dThe maltiplication: %d", malti);

	getch();
}