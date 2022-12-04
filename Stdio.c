#include<stdio.h>
main()
{
    float price,rate,tax,total;
    printf("Enter product price:");
    scanf("%f",&price);
    printf("Enter tax rate:");
    scanf("%f",&rate);
    tax=price*rate/100;
    total=price+tax;
    printf("Sales price is: %.2f",total);
}
