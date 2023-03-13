#include <stdio.h>
void square(int num)
{
	int i,b;
	for(i=1;i<num;i++)
	{
		if(i*i==num)
		{
			printf("this is square number\n");
			break;
		}	
	}
	for(b=1;b<num;b++)
	{
		if(!(i*i==num))
		{
			printf("this is not a square number\n");
			break;
		}
	}
	
}
int main(int argc, char *argv[])
{
	int num;
	printf("enter your number :");
	scanf("%d",&num);
	square(num);
	return 0;
}
