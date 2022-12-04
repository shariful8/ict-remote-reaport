#include<stdio.h> i
float Square(float n)
{
float result;
result=n*n;
return result;
}

 main()
{
float input, output;
printf("Enter a number ");
scanf("%f" ,&input);
output=square(input);

printf("Square of %.2f is %.2f", input, output);
}
