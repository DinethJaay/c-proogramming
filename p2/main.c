#include<stdio.h>

int main()
{
int x=5;
int factorial=1;
int *ptr=&x;
for(*ptr;*ptr>=1;(*ptr)--)
{
factorial=factorial*(*ptr);	
}
printf("%d is the factorial",factorial);

return 0;
}