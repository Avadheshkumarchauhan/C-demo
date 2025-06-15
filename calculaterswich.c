#include<stdio.h>
void main(){

    int num1,num2,s=0;
    char op;
    printf("Enter  first number : ");
    scanf("%d",&num1);
    printf("Enter opparater: ");
    scanf(" %c",&op);
    printf("Enter second number : ");
    scanf("%d",&num2);
    switch (op)
    {
    case '+':
        s=num1+num2;
        break;
    
    case '-':
        s=num1-num2;
        break;
    
    case '*':
        s=num1*num2;
        break;
    
    case '/':
        s=num1/num2;
        break;
    
    case '%':
        s=num1%num2;
        break;
    
    default:
        printf("Invalid  opparater ");
            break;
    }
    printf("%d",s);
}