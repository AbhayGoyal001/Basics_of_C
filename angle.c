#include<stdio.h>
int main(){
int a,b;
    printf("enter the angles of triangle in degree is \n");
    scanf("%d %d",&a,&b);
    printf("the angle of c is %d",180-a-b);
    return 0;
}