#include <stdio.h>

int main(int argc, char *argv[])
{
	int number=5;
	int *ptr;
	ptr=&number;
	printf("number is %d",*ptr);
	return 0;
}
