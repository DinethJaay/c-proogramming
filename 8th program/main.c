#include <stdio.h>

int main()
{
	float price,total,lastprice;
	int amount;
	printf("enter the price: ");
	scanf("%f",&price);
	printf("enter the amount");
	scanf("%d",&amount);
	total=price*amount;
	if(total>1000)
	{
		lastprice=total*95/100;
		printf("you have to pay: %f",lastprice);
	}
	else
	{
		printf("you have to pay: %f",total);
	}
	
	
	return 0;
}
