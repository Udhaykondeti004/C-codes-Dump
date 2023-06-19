#include <stdio.h>

int main(void) {
	char s[10];
	int i;
	printf("Enter any string\n");
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++);
	printf("Length of the string is %d\n",i);
	return 0;
}

