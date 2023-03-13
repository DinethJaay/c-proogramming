#include <stdio.h>

int main()
{
	float basic,allowance,epf,etf,netsallary;
	printf("input basic and allowance:\n ");
	scanf("%f""%f",&basic,&allowance);
	epf=basic*8/100;
	etf=basic*3/100;
	netsallary=basic+allowance-epf-etf;
	printf("recivable salary: %f\n",netsallary);
	
	
	return 0;
}
