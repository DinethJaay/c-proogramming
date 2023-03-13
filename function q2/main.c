#include <stdio.h>
void number(int n)
{
	
    if(n%2==0)
	{
		printf(" number is even\n");
	}
	else
	{
		printf("number is odd\n");
	}
}
int main(int argc, char *argv[])
{
	int num;
	printf("enter the number :");
	scanf("%d",&num);
	number(num);
	return 0;
}
