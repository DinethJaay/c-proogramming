#include <stdio.h>

int main(int argc, char *argv[])
{
	float student[2][2][2];
	int i,j,k;
	float max=0;
	float max1=0;

	for(i=0;i<2;i++){
		
	{
		printf("student %d\n",i+1);
	    for(j=1;j<2;j++)
	    {
    		printf("height :");
  	    	scanf("%f",&student[i][j]);
  		  {
		  	  if(j>max)
    			{
			    	max=max+j;
			    }
		    }
    		for(k=1;k<2;k++)
    		{
		    	printf("weight :");
    		    scanf("%f",&student[i][k]);	
    		    {
    		    	if(k>max1)
    		    	{
	    		    	max1=max1+k;
	    		    }
    		    }
		    }
    	}
	}

	}
		printf("heighest hight is %f",max);
     	printf("height weight is %f",max1);
	return 0;
}
