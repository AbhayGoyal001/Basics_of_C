#include<stdio.h>
#include<math.h>
int main(){
    float a,area;
    printf("enter the sides \n");
    scanf("%f",&a);
    area=sqrt(3)*pow(a,2)/4;
    printf("answer is%f",area);
    return 0;
}