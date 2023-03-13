#include <stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
if(n<2)
{
printf("This is not a prime number\n");
}
else
{
int count=0;
int x=n;
while(x>=1)
{
if(n%x==0)
{
count++;
}
x--;
}

if(count==2)
{
printf("This is a prime number\n");
}
else
{
printf("This is not a prime number\n");
}
}
return 0;
}







#include<stdio.h>

int main()
{
int n, i, f = 0;
printf("Enter a positive integer: ");
scanf("%d", &n);

for (i = 2; i <= n / 2; ++i)
{
// condition for not prime
if (n % i == 0)
{
f= 1;
break;
}
}

if (n == 1)
{
printf("1 is not prime number");
}
else
{
if (f== 0)
printf("%d is a prime number.", n);
else
printf("%d is not a prime number.", n);
}

return 0;
}