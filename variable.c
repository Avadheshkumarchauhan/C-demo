#include<stdio.h>
void main(){
    int number;
    number=10;
    printf("%d\n",number);
    printf("%20d\n",sizeof(int));
    char c='a';
    printf("%10c\n",c);
    printf("%d\n",sizeof(char));
    float num=7.78;
    printf("%18.5f\n",num);
    printf("%d\n",sizeof(float));
    double x=6779.786;
    printf("%.2lf\n",x);
    printf("%d\n",sizeof(double));
    
}