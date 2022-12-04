#include<stdio.h>
#include<string.h>
struct students
{
    int id;
    char name[50];
    char group[30];
    float gpa;
};
int main()
{
    struct students s1;
    struct students s2;
    struct students s3;
    struct students s4;
    struct students s5;


s1.id=01;
strcpy(s1.name,"Shariful");
strcpy(s1.group,"Science");
s1.gpa=4.94;


s2.id=02;
strcpy(s2.name,"Sahidur");
strcpy(s2.group,"Science");
s2.gpa=4.44;


s3.id=03;
strcpy(s3.name,"Rumom Rahman");
strcpy(s3.group,"Science");
s3.gpa=4.75;


s4.id=04;
strcpy(s4.name,"MD Alamin");
strcpy(s4.group,"Arts");
s4.gpa=4.90;

s5.id=05;
strcpy(s5.name,"Shamol");
strcpy(s5.group,"Bussiness Studies");
s5.gpa=4.42;



printf("s1 id is: %d\n",s1.id);
printf("s1 name is: %s\n",s1.name);
printf("s1 group is: %s\n",s1.group);
printf("s1 group is: %.2f\n\n",s1.gpa);


printf("s2 id is: %d\n",s2.id);
printf("s2 name is: %s\n",s2.name);
printf("s2 group is: %s\n",s2.group);
printf("s2 group is: %.2f\n\n",s2.gpa);

printf("s3 id is: %d\n",s3.id);
printf("s3 name is: %s\n",s3.name);
printf("s3 group is: %s\n",s3.group);
printf("s3 group is: %.2f\n\n",s3.gpa);


printf("s4 id is: %d\n",s4.id);
printf("s4 name is: %s\n",s4.name);
printf("s4 group is: %s\n",s4.group);
printf("s4 group is: %.2f\n\n",s4.gpa);


printf("s5 id is: %d\n",s5.id);
printf("s5 name is: %s\n",s5.name);
printf("s5 group is: %s\n",s5.group);
printf("s5 group is: %.2f\n\n",s5.gpa);
}
