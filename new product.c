#include<stdio.h>
power (a,b)
{
    if(b>0) return a*power(a,b-1);
    else
        return 1;
}
int main()
{
    int n1, n2, output;
    printf("Enter the value of base & [pwer");
    scanf("%d%d", &n1,&n2);
    output=power(n1,n2);
    printf(" the result is %d", output)
}
