#include <stdio.h>

int main(int argc, char *argv[])
{
	float student[2][2][2];
	int i=0,j=1,k=1;
	float max=0;
	float max1=0;

	while(i<2){

	{
		printf("student %d\n",i+1);
		i++;
	    for(j=1;j<2;j++)
	    {
    		printf("height :");
		    scanf("%f",&student[i][j]);
		    
		    {
    			if(j>=max)
    			{
			    	max=max+j;
			    }
			    
    		}
    		while(k<=2)
    		{
		    	printf("weight :");
    		    scanf("%f",&student[i][k]);	
    		    k++;
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
