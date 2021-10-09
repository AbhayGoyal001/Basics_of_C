#include<stdio.h>
int main (){
    int a,b;
    printf("the value of a and b before swap\n ");
    scanf("%d %d",&a,&b10);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap %d %d",a,b);
    return 0;

}