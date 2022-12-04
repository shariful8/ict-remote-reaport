#include<stdio.h>
void main()
{
    FILE*fp;
    char ch;
    fp=fopen("SNS.txt", "r");
    ch=fgetc(fp);
    printf("%c", ch);
    fclose(fp);
}
