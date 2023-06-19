#include <stdio.h>

int main(void) {
	int s,e,i,cou;
	printf("Enter starting and ending values");
	scanf("%d %d",&s,&e);
	while(s<=e)
	{
	    cou = 0;
	    i = 1;
	    while(i<=s)
	    {
	        if(s%i==0)
	        cou++;
	        i++;
	    }
	    if(cou==2)
	    printf("%d\n",s);
	    s++;
	}
	return 0;
}

