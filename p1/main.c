#include<stdio.h>

int main()
{
int x=5;
int *vbb=&x;
printf("%p",*vbb**vbb);

return 0;
}