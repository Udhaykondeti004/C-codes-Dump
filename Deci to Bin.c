#include <stdio.h>

int main(void) {
int n,arr[50],i,r,m;
printf("Enter decimal value : ");
scanf("%d",&n);
i = 0;
m = n;
while(n>0){
    r = n%2;
    arr[i] = r;
    i++;
    n = n/2;
}
printf("Binary value of %d is ",m);
for(;--i>=0;)
printf("%d",arr[i]);

	return 0;
}

