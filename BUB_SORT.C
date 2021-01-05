#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void bub_sort();
int arr[50], n;

void main()
{
	int i, j;

	system("cls");

	printf("Enter the numbers count: ");
	scanf("%d", &n);

	printf("Enter the %d integers: \n", n);

	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	bub_sort();

	printf("\nIntegers in ascending order: \n");

	for(j=0; j<n; j++)
	{
		printf("%d\t", arr[j]);
	}

	getch();
}

void bub_sort()
{
	int i, j;

	for(i=0; i<n; i++)
	{
		int flag = 0;

		for(j=0; j<n-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

				flag = 1;
			}
		}

		if(flag == 0)
		{
			break;
		}
	}
}















