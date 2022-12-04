#include<stdio.h>
int main()
{
    int i=1,n,factorial=1;
    printf("Enter number");
    scanf("%d",&n);
    while(i<=n)
    {
        factorial=factorial*i;
        i++;
    }
    printf("Factorial is %d", factorial);
}

