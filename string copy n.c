#include <stdio.h>
#include <string.h>

int main(void) {
	char a[20],b[20];
	int n;
	printf("Enter any string\n");
	scanf("%s",a);
	printf("Enter number of characters\n");
	scanf("%d",&n);
    strncpy(b,a,n);
    b[n] = '\0';
	printf("copied is %s",b);
	return 0;
}

