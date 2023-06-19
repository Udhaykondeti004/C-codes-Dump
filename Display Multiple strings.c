#include <stdio.h>

int main(void) {
	char s[5][10];
	int i;
	printf("Enter any 5 strings\n");
	for(i=0;i<5;i++)
	scanf("%s",s[i]);
	printf("stored strings are\n");
	for(i=0;i<5;i++)
	printf("%s\n",s[i]);
	return 0;
}

