#include <stdio.h>

int main(void) {
	int i,j;
	int k=1;
	for(i=1; i<=4; i++)
	{
	    for(j=1; j<=i; j++)
	    {
	       printf(" %d",k);
	    k++; 
	    }
	    printf("\n");
	}
	return 0;
}

