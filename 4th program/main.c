#include <stdio.h>

int main()
{
	int amount;
	float price,finalbill;
	printf("enter amount & price :\n");
	scanf("%d%f",&amount,&price);
	finalbill=price*amount*95/100;
	printf("yoh have to pay: %f\n",finalbill);
	return 0;
}
