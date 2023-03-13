#include <stdio.h>

int main()
{
	int i;
	for(i=8;i>=3;i--)
	{
		if(i%4==0)
		{
			if(i==8)
			{
				continue;
			}
			printf("%d\n",i*i);
		}
	}
	
	return 0;
}
