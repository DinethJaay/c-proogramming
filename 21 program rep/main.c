#include <stdio.h>

int main()
{
	int lower,upper;
	printf("enter the lower and upper numbers");
	scanf("%d%d",&lower,&upper);
	int n=lower;
	while(n<=upper)
	{
		if(n%2==0)
		{
			printf("%d\n",n);
		}
		n++;
	}
	
	return 0;
}




//Write a c program to display even numbers
//in the range entered by user/*
