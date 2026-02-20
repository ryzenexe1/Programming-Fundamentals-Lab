#include<stdio.h>
int main()
{
	int score, age;
	printf("Enter your fitness score: \n");
	scanf("%d", &score);
	printf("Enter your age: \n");
	scanf("%d", &age);
	if(score >= 85)
	{
		if(age < 25)
		{
				printf("You got 40%% discount\n");
        }
        else
        {
        	printf("You got 25%% discount\n");
		}
	}
    else 
	{
	  if(score >= 70 && age < 30)
	  {
	  	printf("You got 15%% discount\n");
	  }
	  else
	  {
	  	printf("No discount\n");
	  }
    }
}
