#include <stdio.h>
// sum of digits of a number
int main()
{
    int a,b,i=0,sum=0,num,output;
    printf("enter the no. of digits in the number you are going to enter \n ");
    scanf("%d",&a);
    printf("enter the number now\n");
    scanf("%d",&num);
    while(i<=a)
    {
        b=num%10;
        num=num/10;
        sum=sum+b;
        i=i+1;
        if(i==a)
        {
            output=sum;
        }
    }
    printf("%d",output);
    return 0;
}
