#include<stdio.h>
void main(){
    int x,y,s=0;
    char op;
    printf("Enter first number : ");
    scanf("%d",&x);
    printf("Enter opparater : ");
    scanf(" %c",&op);
    printf("Enter Second number : ");
    scanf("%d",&y);
    if(op=='+'){
        s=x+y;
    
    }
    else if(op=='-'){
        s=x-y;
        
    }
    else if(op=='*'){
        s=x*y;
        
    }
    else if(op=='/'){
        s=x/y;
        
    }
    else if(op=='%'){
        s=x%y;
        
    }
    else{
        printf("Invalid input ");
        
    }
    printf("%d",s);

}