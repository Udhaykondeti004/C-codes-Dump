#include <stdio.h>

int main(void) {
	char s[10],t[10];
	int i;
	printf("Enter any String\n");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	t[i]=s[i];
	t[i]='\0';
	printf("Copied String is %s\n",t);
	return 0;
}

