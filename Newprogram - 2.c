#include<stdio.h>
int maxmin(num1, num2)
{
    if(num1>num2)
    {
        printf("%d is maximum number", num1);
        printf("%d is minimum number", num2);
    }
    else{
        printf("%d is maximum number\n", num2);
        printf("%d is minimum number\n", num1);
    }
}

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a,&b);

    maxmin(a, b);
}
