#include<stdio.h>
int main()
{
FILE *x;
x=fopen("names.txt","w");
fprintf(x,"Sandaruwani");
return 0;
}