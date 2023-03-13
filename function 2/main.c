#include <stdio.h>
float average(float n1,float n2,float n3)
{
	float total,average1;
	total=n1+n2+n3;
	average1=total/3;
	printf("average is %f",average1);
}

int main(int argc, char *argv[])
{
	float x,y,c;
	printf("Enter number 1 :",x);
	scanf("%f",&x);
	
	
	printf("Enter number 2 :",y);
	scanf("%f",&y);

	
	printf("Enter number 3 :",c);
	scanf("%f",&c);
	average(x,y,c);
	
	return 0;
}
