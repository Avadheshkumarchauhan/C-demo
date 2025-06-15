#include<stdio.h>
void main(){
    int x,y;
    //x=7;y=9;
    printf("Enter two number : ");
    scanf("%d %d",&x,&y);
    printf("Before number : %d , %d\n",x,y);
    int tamp=0;
    tamp=x;
    x=y;
    y=tamp;
    printf("After swaping numer %d,%d\n",x,y);
}