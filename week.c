#include<stdio.h>
int main(){
    float d;
    printf("number of days\n");
    scanf("%f",&d);
    printf("week %f\n",d/7);
    printf("months %f\n",d/30);
    printf("year %f\n",d/365);
    return 0;

}