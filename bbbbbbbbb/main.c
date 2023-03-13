#include <stdio.h>

void value(int x,int y);

void value2(int x,int y)

{

  printf("%d",x+y);  

}



int main()

{

int a=10,b=8;

value(a,b);

return 0;

}



void value(int x,int y)

{

    printf("%d",x-y);

}