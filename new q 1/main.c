#include <stdio.h>

int main(int argc, char *argv[])
{
	int height,height1,highesthight;
	printf("enter two height:\n");
	scanf("%d%d",&height,&height1);
	if(height<height1)
	{
		printf("heighest height is %d\n",height1);
		printf("\n");
	}
	else
	{
	    printf("heighest height  is %d\n",height);
	    printf("\n");
	}
	int weight1,weight2;
	printf("Enter two weights:\n");
	scanf("%d%d",&weight1,&weight2);
	if(weight1>weight2)
	{
		printf("height weight is %d\n",weight1);
		printf("\n");
	}
	else
	{
		printf("highest weight is %d\n",weight2);
		printf("\n");
	}
	return 0;
}
