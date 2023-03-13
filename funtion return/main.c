#include <stdio.h>
int factorial(int y)
{
	int fact=1;
	while(y>=1)
	{
		fact=fact*y;
		y--;
		
	}
	
   
}
int main(int argc, char *argv[])
{
	int num;
	printf("enter your number");
	scanf("%d",&num);
	int factor=factorial(num);
	printf("factorial is %d",factor);
	
	return 0;
}
