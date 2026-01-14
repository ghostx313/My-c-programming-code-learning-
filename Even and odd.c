// even or odd 

#include<stdio.h>

int main(void)
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	if (number % 2 == 0)
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
	
	return 0;
}
