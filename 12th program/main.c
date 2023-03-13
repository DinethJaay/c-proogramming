#include <stdio.h>

int main()
{
int marks;
printf("Enter marks:");
scanf("%d",&marks);
if(marks>=75)
{
printf("A\n");
}

else
{
if(marks>=65)
{
printf("B\n");
}
else
{
if(marks>=55)
{
printf("C\n");
}
else
{
printf("D\n");
}

}
}
return 0;
}
