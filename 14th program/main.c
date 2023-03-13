#include <stdio.h>

int main()
{

char grade;
printf("Enter your grade:");
scanf("%c",&grade);
switch(grade)
{
case 'A':
printf("Great\n");
break;

case 'B':
printf("Good\n");
break;

case 'C':
printf("Average\n");
break;

case 'D':
printf("Poor\n");
break;

case 'E':
printf("Very poor\n");
break;

default:
printf("this is not a valid grade");
break;
}

return 0;
}

