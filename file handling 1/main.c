#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *banking1,*banking2;
	float deposit,accountbalance;
	banking1=fopen("bankingapplication.txt","r");
	fscanf(banking1,"%f",&accountbalance);
	printf("enter your deposit amount:");
	scanf("%f",&deposit);
	accountbalance+=deposit;
	banking2=fopen("bankingapplication.txt","w");
	fprintf(banking2,"%f",accountbalance);
	printf(" your accountbalance is %f ",accountbalance);
	
	return 0;
}
