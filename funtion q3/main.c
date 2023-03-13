#include <stdio.h>
void prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		count++;	
		}
		
	}
	if(count==2)
	{
		printf("%d is a prime number\n",n);
	}	
	else
	{
		printf("%d is not a prime number\n",n);
	}
}
int main(int argc, char *argv[])
{
	int num;
	printf("enter your number");
	scanf("%d",&num);
	prime(num);
	
	return 0;
}
