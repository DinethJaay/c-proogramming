#include <stdio.h>

int main()
{
	float waterunit,watertot,electricityunit,electricitytot,total,tax,finalbill;
	printf("Input waterbill units: ");
	scanf("%f",&waterunit);
	watertot=waterunit*5;
	printf("Input electricity Units: ");
	scanf("%f",&electricityunit);
	electricitytot=electricityunit*7;
	total=watertot+electricitytot;
	if((electricitytot>1000)&&(watertot>500))
	{
		tax=total*2/100;
		finalbill=total-tax;
		printf("you have to pay %f",finalbill);
		
	}
	else
	{
		printf("you have to pay %f",total);
	}
	
      
	return 0;
}
