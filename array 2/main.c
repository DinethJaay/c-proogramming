#include <stdio.h>

int main(int argc, char *argv[])
{
	float deposits[5];
	float tot=0;
	int count=0;
	for(count=0;count<5;count++)
	{
		printf("enter your deposite:%d  ",count+1);
		scanf("%f",&deposits[count]);
		tot+=deposits[count];
		printf("Your currant balance is %f\n\n" ,tot);
		
		
		
	}
	
	return 0;
}
