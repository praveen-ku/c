#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	double principle, i_rate, time_y, amount;

	system("cls");

	printf("<------ Simple Interest Calculater ----->\n\n");
	printf("Principle: ");
	scanf("%lf", &principle);
	printf("Interest rate: ");
	scanf("%lf", &i_rate);
	printf("Time(Year): ");
	scanf("%lf", &time_y);

	amount = (principle*i_rate*time_y)/100;

	printf("\nInterest: %lf", amount);

	getch();
}