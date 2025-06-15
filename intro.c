#include<stdio.h>
void main(){
    char college_name[100],name[100],father_name[100],branch_name[100];
    printf("Enter college name: ");
    gets(college_name);
    printf("Enter name ");
    gets(name);
    printf("Enter father`s name: ");
    gets(father_name);
    printf("Enter branch name : ");
    gets(branch_name);
    printf("\n\n\n\t\t%s\n",college_name);
    printf("My name is %s\n",name);
    printf("My father`s name is %s\n",father_name);
    printf("My branch name is %s\n",branch_name);
    
}