#include<stdio.h>
int main()
{
    int i=1,n,product=1;
    printf("Enter number of iteration: ");
    scanf("%d",&n);
    while(i<=n)
    {
        product=product*i;
        i++;
    }
    printf("Product is %d", product);
}
