#include<stdio.h>
int main()
{
    int i,n,factorial=1;
    printf("Enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("Factorial is %d", factorial);
}
