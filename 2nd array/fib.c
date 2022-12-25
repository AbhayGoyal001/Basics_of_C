#include<stdio.h>
void main(){
	int f1,f2,f3,n;
	printf("Enter the range: ");
	scanf("%d",&n);
	f1=0;
	f2=1;
	printf("%d\t%d",f1,f2);
	f3 = f1+f2;
	while(f3>=n){
		f1 = f2;
		f2 = f3;
		f3 = f1+f2;
		printf("%d",f3);
	}
}
