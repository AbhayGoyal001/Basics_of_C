#include<stdio.h>
#include<math.h>
int main(){
    int base,exponent,result;
    printf("enter the x and y\n");
    scanf("%d %d",&base,&exponent);
    result=pow(base,exponent);
    printf("answer %d^%d=%d\n",base,exponent,result);
    return 0;
}