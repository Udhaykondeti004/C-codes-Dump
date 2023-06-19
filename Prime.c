#include <stdio.h>

int main(void) {
	int n,i;
	scanf("%d",&n);
	i = 2;
	while(i<n)
	{
	    if(n%i==0)
	    {
	     printf("%d is composite\n",n);
	     break;
	    }
	    i++;
	}
	if(i==n)
	printf("%d is prime\n",n);
	return 0;
}

