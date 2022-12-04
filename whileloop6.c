
#include<stdio.h>
int main()
{
    int i,n,sumOfOdd=0, sumOfEven=0;
    printf("Enter number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sumOfOdd=sumOfOdd+i;
        i=i+2;
        printf("Sum of Odd Numbers is %d\n", sumOfOdd);
    }

    i=2;
    while(i<=n)
    {
        sumOfEven=sumOfEven+i;
        i=i+2;
        printf("Sum of Even Numbers is %d\n", sumOfEven);
    }

}
