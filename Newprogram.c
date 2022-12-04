#include<stdio.h>
float findDiameter(float r)
{
    float d;
    d = 2*r;
    return d;
}
float findCircum(float r)
{
    float c;
    c = 2 * 3.1416 * r;
    return c;
}
float findArea(float r)
{
    float a;
    a = 3.1416*r*r;
    return a;
}

int main()
{
    float r, diametar, circum, area;
    printf("Enter redius :");
    scanf("%f", &r);

    diametar = findDiameter(r);
    circum = findCircum(r);
    area = findArea(r);
    printf("The diameter is %.2f, Circumference is %.2f, area is %.2f", diametar, circum, area);
}
