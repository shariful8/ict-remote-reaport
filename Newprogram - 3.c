#include<stdio.h>
int swapTwoNumber(num1, num2)
{
    int num3;
    num3 = num1;

    num1 = num2;

    num2 = num3;

    printf("%d\t %d", num1, num2);
}
int main()
{
    int a,b, result;
    printf("Enter two number: ");
    scanf("%d%d",&a, &b);

    swapTwoNumber(a, b);


}
