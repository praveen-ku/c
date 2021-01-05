#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	int a, b;
	int* ptr;

	system("cls");

	a = 5;
	ptr = &a;

	printf("Value of a is %d\n", a);
	printf("%d is stored at address %u\n", a, &a);
	printf("%d is stored at address %u\n", *ptr, ptr);
	printf("%d is stored at address %u\n", ptr, &ptr);
	printf("%d is stored at address %u\n", b, &b);

	*ptr = 20;

	printf("\nNow a is = %d", a);

	getch();
}