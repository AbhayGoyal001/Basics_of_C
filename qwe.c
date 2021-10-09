#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value\n");
    scanf("%d",&a);
    b=a+(a*(20/100));
    printf("%d",b);
    c=b+(b*(30/100));
    printf("%d",c);
    return 0;
    
}