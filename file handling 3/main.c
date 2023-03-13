#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *number;
	int y;
	float numbers;
	number=fopen("numbers.txt","w+");
	for(y=1;y<=10;y++)
	{
		printf("enter your number");
		scanf("%f",&numbers);
	
	}
		fprintf(number,"%f",numbers);
	
	return 0;
}
