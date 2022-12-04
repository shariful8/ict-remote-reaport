#include<stdio.h>
int main()
{
    int i,n,sumOfOdd=0, sumOfEven=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sumOfOdd=sumOfOdd+i;
    }
    printf("Sum of Odd Numbers is %d\n", sumOfOdd);
    for(i=2;i<=n;i=i+2)
    {
        sumOfEven=sumOfEven+i;
    }
    printf("Sum of Even Numbers is %d\n", sumOfEven);
}
