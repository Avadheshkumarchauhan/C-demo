#include<stdio.h>
void main(){
    int num;
    printf("Enter leap year :");
    scanf("%d",&num);
    if (num<=100 && num>=95){
        printf("A+");
    }
    else if (num<95 && num>=90){
        printf("A");
    }
    else if( num<90 && num>=60){
        printf("first division");
    }
    else if(num<60 && num>=45){
        printf("Second division");

    }
    else if(num<45 && num>=33){
        printf("Third division");
    }
    else if(num<33 && num>=0){
        printf("Fail ?");
    }
    else
    {
        printf("Not valid ");
    }
    
   
    
}