#include <stdio.h>
int main()
{
	int i,k;
    for( i = 0; i < 5; i++)
    {
        
        for( k = 0; k <= i; k++)
        {
            printf("*");
        }

        printf("\n");
    }


	return 0;
}
