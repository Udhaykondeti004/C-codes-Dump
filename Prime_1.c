#include <stdio.h>

int main(void) {
int n,i,cou;
scanf("%d",&n);
cou = 0;
i = 1;
while (i<=n)
{
    if (n%i==0)
    cou++;
    i++;
}
if(cou==2)
printf("%d is prime\n", n);
else
printf("%d is composite\n",n);
	return 0;
}

