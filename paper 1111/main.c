#include <stdio.h>

int main()
{
    int id,age;
    char name;
    int  vaccination;
    int x;
    float tot=0;
    float pre;
    for(x=0;x<50;x++)
    {
    printf("enter your id:\n");
    scanf("%d",&id);
    printf("enter your name:\n");
    scanf("%s",&name);
    printf("enter your age:\n");
    scanf("%d",&age);
     printf("status of vaccination:\n");
    scanf("%d",&vaccination);
    if(vaccination==1)

   {
       printf("yes\n");
       if (age>30)
       {
           tot=tot+1;
       }

   }
   else if(vaccination==0)
   {
       printf("no\n");
   }


}
 pre=tot/50*100;
       {
           printf("precentage is %f\n",pre);
       }

    return 0;
}
