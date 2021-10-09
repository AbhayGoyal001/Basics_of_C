#include<stdio.h>
int main(){
    float r;
    printf("enter the length in meter\n");
    scanf("%f",&r);
    printf(" %f\n",2*r);
    printf("enter the length in centimeter %f\n",r/100);
    printf("enter the length in kilometer %f\n",r*1000);
    return 0;

}