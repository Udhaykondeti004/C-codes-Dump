#include <stdio.h>
#include <math.h>

int main(void) {
	long n,sum,r,i,m;
	printf("Enter binary value : \n");
	scanf("%ld",&n);
	sum = 0;
	i = 0;
	m = n;
	while(n>0){
	    r = n%10;
	    sum = sum+pow(2,i)*r;
	    i++;
	    n = n/10;
	}
	printf("The Decimal value of %ld is %ld",m,sum);
	return 0;
}

