#include <stdio.h>

int main(int argc, char *argv[])
{
	int x=3;
	while(x<=6)
	{
		x++;
		printf("%d%d\n",x++,--x);
	}
	return 0;
}
