#include <stdio.h>

int main(int argc, char *argv[])
{
	int student[2];
	float j,k;
	float max=0;
	float max1=0;
	int i;
	for(i=1;i<=2;i++){
	{
			printf("student %d\n",i);
	}
	for(j=0;j<2;j++)
	{
		printf("enter your weight\n");
		scanf("%f",&j);
		{
		if(j>max)
		{
			max=j;
		}
	    }
		for(k=0;k<2;k++)
		{
			printf("enter your height\n");
			scanf("%f",&k);
			{
			if(k>max1)
			{
				max1=k;	
			}
			
			
				
			}
			
		}
	}
	}
	         printf("Heighest height is %f",max);
		     printf("heighest weight is %f",max1);

	
       
	return 0;
	}
