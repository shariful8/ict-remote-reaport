#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter number of iteration: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("Result is %d\n", sum);
    }

}
