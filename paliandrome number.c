#include<stdio.h>
int main()
{
    int num,r,sum=0,temp;
    printf("enter the number:");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    if(temp==sum)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("not a palindrome number");
    }
    return 0;
}
