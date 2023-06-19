#include <stdio.h>

int main(void) {
	char s[10],t[10];
	int i,j;
	printf("Enter any String\n");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++);
	for(j=0;--i>=0;j++)
	t[j]=s[i];
	t[i]='\0';
	printf("Reverse of a String is %s\n",t);
	return 0;
}

