#include<stdio.h>
int multiplies(int n){
if(n<=1)
    return n;
    else return multiplies(n-1)+ multiplies(-2);

}
int main(){
    int n, result;
    printf("Enter the value: ");
    scanf("%d",&n);
    result=multiplies(n);
    printf("Outpur is %d",result);
    return 0;

}

