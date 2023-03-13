
#include <stdio.h>
void highest(float x1,float x2)
{
if(x1>x2)
{
printf("Highest is %f\n",x1);
}
else
{
printf("Highest is %f\n",x2);
}
}
int main()
{float h1,h2;
printf("Enter heights\n");
scanf("%f%f",&h1,&h2);
highest(h1,h2);

float w1,w2;
printf("Enter two weights\n");
scanf("%f%f",&w1,&w2);
highest(w1,w2);

return 0;
}