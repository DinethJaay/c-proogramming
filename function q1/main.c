#include <stdio.h>
void number(int n)
{
	int x;
	for(x=1;x<=n;x++)
	{
		printf("%d\n",x);
	}   
}
int main(int argc, char *argv[])
{
	int a;
	printf("enter the number :");
	scanf("%d",&a);
	number(a);
	return 0;
}
