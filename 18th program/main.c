#include <stdio.h>

int main()
{
	int count=0;
	int num;
	int max=0;
	while(count<10)
	{
		printf("Enter number %d  ",count+1);
		scanf("%d",&num);
		if(num>max)
		{
			max=num;
		}
		count++;
	}
	printf("Highest number is %d \n ",max);
	return 0;
	
}




















