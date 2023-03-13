#include <stdio.h>
int main()
{
	int num;
	for(num=1;num<=12;num++)
	{
		if(num%3==0)
		{
			if(num==6)
			{
				continue;
			}
			printf("%d\n",num);
		}
	}
return 0;
}






















