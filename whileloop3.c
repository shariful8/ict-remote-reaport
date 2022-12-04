#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter number of iteration: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Result is %d\n", sum);
}

