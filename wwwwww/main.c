#include <stdio.h>
void display(int x)
{
    printf("%d",--x);
}

int main()
{
int y=5;
if(++y*2-1==9)
{
    display(6);
}

else
{
    display(8);
}
    return 0;
}