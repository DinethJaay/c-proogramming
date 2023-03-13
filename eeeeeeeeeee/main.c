#include <stdio.h>

int main(int argc, char *argv[])
{
	int report[10][2][10];
	int d,a,x;
	int tot;
	float ave;
	for(d=0;d<3;d++)
	{
		printf("enter destrict %d\n",d+1);
	 
	  for(a=0;a<1;a++)
    {
  	   printf("Enter amount of accidents\n");
  	   scanf("%d",&report[d][a]);
  	   
  	   
  	   for(x=0;x<1;x++)
  	   {
  	       printf("amount of deaths\n");
  	       	scanf("%d",&report[d][a][x]);
  	   	
  	       
  	   }
  	   	tot+=report[d][a];
  	   	ave=tot/10*100;
   	}
	  
	}

	 
	 printf("total is %d/n",tot);
	 printf("average is %f",ave);
	 
	return 0;
}

