#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int i,sum;

printf("the even number between 1 to 50:");

for(i=2;i<=100;i=i+2)
    {

    sum=sum+i;

printf("\n%d",i);
    }

    printf("-------------\n\n");

    printf("\n%d",sum);


        return  0;
}
