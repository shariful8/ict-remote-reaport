#include<stdio.h>
int factorial(int n){
if(n<=1)
    return n;
    else return factorial(n-1)+ factorial(-2);

}
int main(){
    int n, result;
    printf("Enter the value: ");
    scanf("%d",&n);
    result=factorial(n);
    printf("Outpur is %d",result);
    return 0;

}
