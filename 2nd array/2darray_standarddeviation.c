/*
Finding the standard deviation of all the elements of the matrix
*/
#include<stdio.h>
#include<math.h>
void main(){
	int row,col,sum=0,i,j;
	float avg,sdsum=0,diff=0;
	printf("Enter the number of rows of the matrix: ");
	scanf("%d",&row);
	printf("Enter the number of columns of the matrix: ");
	scanf("%d",&col);
	int a[row][col];
	printf("Enter the elements of the %dx%d matrix",row,col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
			sum += a[i][j]; 
		}
	}
	printf("\n\n");
	printf("The %dx%d matrix that you have created is as follows\n",row,col);
	for(i=0;i<row;i++){
		printf("\t");
		for(j=0;j<col;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	avg = (float)sum/(row*col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			diff = avg-a[i][j];
			diff = pow(diff,2);
			sdsum = sdsum+diff;
		}
	}
	sdsum = sqrt(sdsum/(row*col));
	printf("The standard deviation of the given elements is %.2f\n",sdsum);
}
