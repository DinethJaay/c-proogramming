#include <stdio.h>

int main()
{
	int count=0;
	int num;
	int max=0;
	for( count=0;count<10;count++)
	{
		printf("Enter number : %d",count+1);
		scanf("%d",&num);
		if(num>max)
		{
			max=num;
		}
	
	}
	system("cls");
	printf("max is : %d",max);
	return 0;
}
