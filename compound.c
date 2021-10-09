#include<stdio.h>
#include<math.h>
int main(){
    float p,r,n,c;
    printf("enter the value\n");
    scanf("%f""%f""%f",&p,&r,&n);
    c=p*pow((1+r/100),n);
    printf("%f",c);
    return 0;
}