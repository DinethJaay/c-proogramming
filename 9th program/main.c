#include <stdio.h>

int main()
{
	float basic,allowance,totalsalary,tax,payblesalary;
	printf("enter basic and Allowance: ");
	scanf("%f%f",&basic,&allowance);
	if(basic>=10000)
    {
        totalsalary=basic+allowance;
        tax=totalsalary*1/100;
        payblesalary=totalsalary+tax;
    }
    else
    {
      payblesalary=basic+allowance;
    }

	printf("you have to pay: %f",payblesalary);



	return 0;
}
