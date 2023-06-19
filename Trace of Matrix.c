#include <stdio.h>

int main(void) {
	int arr[10][10],nr,nc,i,j,sum;
	printf("Enter number of rows and columns\n");
	scanf("%d %d",&nr,&nc);
	if(nr!=nc)
	printf("Trace of the Matrix cant be found\n");
	else {
	    printf("Enter the Elements\n");
	    for(i=0;i<nr;i++)
	    for(j=0;j<nc;j++)
	    scanf("%d",&arr[i][j]);
	    sum = 0;
	    for(i=0;i<nr;i++)
	    for(j=0;j<nc;j++)
	    if(i==j)
	    sum = sum+arr[i][j];
	    
	    printf("Trace of the Matrix is %d\n",sum);
	}
	return 0;
}

