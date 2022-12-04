main()
{
    int num1,num2,temp;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swapping, 1st number=%d,2nd number=%d,",num1,num2);
}
