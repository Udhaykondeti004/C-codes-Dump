#include <stdio.h>
#include <conio.h>

void main() {
	int a[3][3], b[3][3], c[3][3];
	int r1,c1,r2,c2,i,j,k;
	clrscr();
	printf("Enter number of rows and columns\n");
	scanf("%d %d",&r1,&c1);
	printf("Enter number of rows and columns\n");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2)
	printf("Matrix Multiplication is not possible\n");
	else{
	    printf("Enter elements for matrix a\n");
	    for(i=0;i<r1;i++)
	    for(j=0;j<c1;j++)
	    scanf("%d",a[i][j]);
	    printf("Enter elements for matrix b\n");
	    for(i=0;i<r2;i++)
	    for(j=0;j<c2;j++)
	    scanf("%d",b[i][j]);
	    for(i=0;i<r1,i++){
	     for(j=0;j<c2;j++){
	         c[i][j]=0;
	         for(k=0;k<r2;k++)
	         c[i][j]=c[i][j]+a[i][k]*b[k][j];
	     }
	    } printf("Matrix multiplication\n")
	        for(i=0;i<r1;i++){
	        for(j=0;j<c2;j++)
	        printf("%5d",c[i][j]);
	        printf("\n");
	    }
	}
	getch();
}

