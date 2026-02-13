#include<stdio.h>

int main()
{
	float bal;
	printf("Enter your account balance: \n");
	scanf("%f", &bal);
	if (bal>0)
	{
		printf("Positive Balance");
	}
	else if (bal < 0)
	{
		printf("Overdrawn");
	}
	else
	{
		printf("Zero Balance");
	}
}
