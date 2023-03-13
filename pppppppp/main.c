#include <stdio.h>



int square(int n)

{

    return n*n;

}

int main()

{

int x=5;

while(x<=1000)

{

    x=square(x);

    

}

printf("%d",x);

    return 0;

}
