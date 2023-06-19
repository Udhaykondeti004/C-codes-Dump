#include <stdio.h>

int main(void) {
	int r,c,a[3][3], b[3][3], d[3][3];
	printf("Enter Values for matrix a\n");
	for(r=0;r<3;r++)
	    for(c=0;c<3;c++)
	    scanf("%d",&a[r][c]);
	
	printf("Enter Values for matrix b\n");
	for(r=0;r<3;r++)
	    for(c=0;c<3;c++)
	    scanf("%d",&b[r][c]);
	    
     	for(r=0;r<3;r++)
	    for(c=0;c<3;c++)
	    d[r][c] = a[r][c] + b[r][c];
	    
	    printf("Matrix Addition \n");
	    for(r=0;r<3;r++){
	    for(c=0;c<3;c++)
	    printf("%5d",d[r][c]);
	    printf("\n");
	    }
	
	
	
	return 0;
}

