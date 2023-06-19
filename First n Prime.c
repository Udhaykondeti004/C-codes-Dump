#include <stdio.h>

int main(void) {
	int n,i,s,x;
	printf("Enter n value\n");
	scanf("%d", &n);
	s = 2;
	i = 1;
	while(i<=n)
	{
	    x = 2;
	    while(x<s)
	    {
	        if(s%x==0)
	        break;
	        x++;
	    }
	    if(x==s)
	    {
	        printf("%d\n",s);
	        i++;
	    }
	    s++;
	}
	return 0;
}

