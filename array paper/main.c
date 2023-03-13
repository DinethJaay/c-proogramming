#include <stdio.h>

int main(int argc, char *argv[])
{
	int report[10][2];
	int d,a;
	int tot;
	float ave;
	for(d=0;d<3;d++)
	{
		printf("enter destrict %d\n",d+1);
	 
	  for(a=0;a<1;a++)
    {
  	   printf("Enter amount of accidents\n");
  	   	scanf("%d",&report[d][a]);
  	   	tot+=report[d][a];
   	}
	  
	}
	 
	 printf("total is %d",tot);
	return 0;
}
