#include <stdio.h>

int main(void) {
	char s1[10],s2[10];
	int i,j,k,cou;
	printf("Enter the first string\n");
	scanf("%s",s1);
	printf("Enter the second string\n");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';j++);
	for(cou=0,k=0;s1[k]!='\0'&&s2[k]!='\0';k++){
	    if(s1[k]==s2[k])
	    cou++;
	}
	if(cou==i&&cou==j)
	   printf("Strings are Equal\n");
	else
	   printf("Strings are not Equal\n");
	
	return 0;
}

