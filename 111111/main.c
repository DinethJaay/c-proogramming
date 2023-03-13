#include <stdio.h>

int main(int argc, char *argv[])
{
	int m,n;
	for(m=1;m<=3;m++)
	{
		for(n=1;n<=4;)
		{
			if(n==2)
			break;
			n++;
			
		}
		printf("\n%d",n);
	}
	printf("\n\n");
	return 0;
}
