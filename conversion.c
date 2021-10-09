#include<stdio.h>
int main(){
    float r;
    printf("enter the length in meter\n");
    scanf("%f",&r);
    
    printf("enter the length in centimeter %fcm\n",r/100);
    printf("enter the length in kilometer %fkm\n",r*1000);
    return 0;

}