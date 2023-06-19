#include <stdio.h>

int main(void) {
	int i,j;
	for(i=5; i>=1; i--)
	{
	    for(j=i; j<=5; j++)
	    printf("%d",j%2);
	    printf("\n");
	}
	return 0;
}

