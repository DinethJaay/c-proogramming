#include <stdio.h>

int main(int argc, char *argv[])
{
	int number=5;
	int *xyz=&number;
	printf("number is %d\n",*xyz);
	return 0;
}
