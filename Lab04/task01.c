#include<stdio.h>

int main()
{
	float att;
	printf("Enter our practice attendance percentage: \n");
	scanf("%f", &att);
	if (att>=75)
	{
		printf("Selected for tournament");
	}
	else 
	{
		printf("Not selected");
	}
}
