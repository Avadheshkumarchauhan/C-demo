#include<stdio.h>
void main(){

int num1,num2;
printf("Enter two number : ");
scanf("%d %d",&num1,&num2);
float avg=(float)(num1+num2)/2;
printf("Avg of %d & %d = %.2f\n",num1,num2,avg);
}