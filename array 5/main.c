#include <stdio.h>

int main(int argc, char *argv[])
{
	float marks[3][2];
	int i,u;
	for(i=0;i<3;i++)
	{
		printf("enter suject %d\n",i+1);
		for(u=0;u<=2;u++)
		{
			printf("student number:%d ",u+1);
			scanf("%f",&marks[i][u]);
		}
	}
	
	return 0;
}
//2d arry




/*#include <stdio.h>

int main(int argc, char *argv[])
{
float marks[3][4][3];
int i,j,k;
for(i=0;i<3;i++)
{
printf("Enter subject %d marks\n\n",i+1);
for(j=0;j<4;j++)
{
printf("year %d\n",j+1);

for(k=0;k<3;k++)
{
printf("Student %d\n",k+1);
scanf("%f",&marks[i][j][k]) ;
}
}
}
return 0;
}

//3d array*/


