#include <stdio.h>

int main(void) {
	int n, rem, rev, m ;
	scanf("%d", &n);
	m = n;
	rev = 0;
	while (n>0)
	{
	    rem = n%10;
	    rev = rev * 10 + rem;
	    n = n/10;
	}
	printf("Reverse of %d is %d\n", m, rev);
	
	return 0;
}

