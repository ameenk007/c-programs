#include<stdio.h>
long f(int n)
{
    if(n==0)
        return 1;
else
    return(n*f(n-1));
}
void main()
{
    int num;
    long fact;
    printf("enter a number: ");
    scanf("%d",&num);
    fact= f(num);
    printf("factorial of %d is %d",num,fact);
    return 0;
    }
