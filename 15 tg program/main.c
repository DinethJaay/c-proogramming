#include <stdio.h>

int main()
{
	int num;
	printf("welcome to dialg\n     plz press\n 1-prepaid payments\n 2-postpaid payments\n 3-ask for loan\n");
	scanf("%d",&num);
	system ("cls");
	switch(num)
	{
		case 1:
		printf("welcome to dialog prepaied recharge center\n");
		break;
		
		case 2:
		printf("welcome to dialog postpaid recharge center\n");
		break;
		
		case 3:
		printf("welcome to dialog loan center\n");
		break;
		
		default :
		printf("any other service\n");
		break;
	}
	return 0;	
}



/*Welcome to Dialog
Please press
1.prepaid payments
2.postpaid payments
3.ask for loan



1 - welcome to dialog prepaid recharge center
2 - welcome to dialog post paid recharge center
3 - welcome to dialog loan center
any other key - dont display anything/*