#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter number of iteration: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i=i+2;
    }
}

