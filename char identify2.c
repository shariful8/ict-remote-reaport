#include<stdio.h>
int main()
{
    char Ch;
    printf("Enter any Character: ");
    scanf("%c", &Ch);
    if((Ch>='A' && Ch<='Z')||(Ch>='A' && Ch<='Z'))
        printf("%c is an Alphabet: ",Ch);
    else
        printf("%c is not an Alphabet: ",C);

        return 0;

}
