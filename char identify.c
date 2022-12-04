#include<stdio.h>
int main()
{
    char C;
    printf("Enter a Character: ");
    scanf("%c", &C);
    if((C>='a' && C<='z')||(C>='A' && C<='Z'))
        printf("%c is an Alphabet: ",C);
    else
        printf("%c is not an Alphabet: ",C);

        return 0;

}
