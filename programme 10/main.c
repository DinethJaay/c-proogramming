#include <stdio.h>

int main()
{
	float basic,allowance,totalsalary,tax;
	printf("enter basic and allowance: ");
	scanf("%f%f",&basic,&allowance);
	totalsalary=basic+allowance;
	if((totalsalary>=100000)&&(totalsalary<200000))
	{
		tax=basic*5/100;
		totalsalary-=tax;
	}
	printf("your total salary is: %f",totalsalary);

      return 0;
}
