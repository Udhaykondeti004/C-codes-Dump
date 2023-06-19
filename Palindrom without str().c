#include <stdio.h>

int main(void) {
	char s1[10],s2[10];
	int i,j,k,cou;
	printf("Enter any string\n");
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++);
	for(j=0,k=i-1;k>=0;j++,k--)
	s2[j]=s1[k];
	s2[j]='\0';
	printf("reverse string is %s\n",s2);
	for(cou=0,k=0;k<i;k++){
	if(s1[k]==s2[k])
	cou++;
	}	if(cou==i)
	printf("it is palindrome\n");
	else
	printf("not a palindrome\n");
	
	return 0;
}

