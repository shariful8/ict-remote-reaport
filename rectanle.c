#include<stdio.h>
float areaofrectangle(float length, float width)
{
    float result;
    result=length*width;
    return result;
}
int main()
{
    float length, width, result;
    printf("Enter length and width of rectangle: ");
    scanf("%f%f", &length,&width);
    result=areaofrectangle(length,width);
    printf("Result is %.2f", result);
}
