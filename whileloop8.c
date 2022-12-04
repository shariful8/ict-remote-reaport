
#include<stdio.h>
int main()
{
    int i=1,n, product;
    printf("Enter the value of multiplication table: ");
    scanf("%d",&n);
    while(i<=10)
    {
        product=n*i;
        printf("%d*%d=%d\n",i,n,product);
        i++;
    }

}
