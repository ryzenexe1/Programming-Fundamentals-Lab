#include<stdio.h>

int main()
{
	float data;
	printf("Enter your monthly data consumption: \n");
	scanf("%f", &data);
	if (data<=50)
	{
		printf("Basic User");
	}
	else if (data > 50 && data <= 150)
	{
		printf("Standard User");
	}
	else
	{
		printf("Heavy User");
	}
}
