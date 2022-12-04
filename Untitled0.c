#include<stdio.h>
main()
{
    int n, q;
    printf("enter the number:");
    scanf("%d", &n);
    while(n!=0)
        {
    q=n%10;
    printf("%d", q);
    n-n/10;
    }
}
