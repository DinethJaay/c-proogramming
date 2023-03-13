#include <stdio.h>

int main()
{
	char grade;
	printf("Enter your Grade: ");
	scanf("%c",&grade);
	if(grade=='A')
	{
		printf("great");
	}
	else if(grade=='B')
	{
		printf("good");
	}
	else if(grade=='C')
	{
		printf("average");
	}
	else if(grade=='D')
	{
		printf("poor");
	}
	else
	{
		printf("verypoor");
	}
	
	return 0;
}
