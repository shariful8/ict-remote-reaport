#include<stdio.h>
int main()
{
    int n1, n2, result;
    char sign;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);
    printf("Enter the operator: ");
    scanf("%c", &sign);
    switch(sign)


{case'+':
    result=n1+n2;
    printf("sum is: %d", result);
    break;

    case'-':
    result=n1-n2;
    printf("sub is: %d", result);
    break;
    case'/':
    result=n1/n2;
    printf("division is: %d", result);
    break;
    case'%':
    result=n1%n2;
    printf("modulus is: %d", result);
    break;

    }

}

