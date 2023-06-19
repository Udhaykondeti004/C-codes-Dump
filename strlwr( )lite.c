#include <stdio.h>

int main(void) {
	char s1[10],s2[10];
	int i;
	printf("Enter any string\n");
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++)
	s2[i]=s1[i]+32;//-32 if we want to Uppercase
	s2[i]='\0';
	printf("Lower case string is %s\n",s2);
	return 0;
}

