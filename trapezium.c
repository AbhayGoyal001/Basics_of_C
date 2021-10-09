#include<stdio.h>
int main(){
    float r;
    printf("enter the radius \n");
    scanf("%f",&r);
    
    printf("volume=%f",(4*3.14*r*r*r)/3);
    return 0;
}