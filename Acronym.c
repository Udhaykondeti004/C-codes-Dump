
#include <stdio.h>

int main(void) {
	char s[100],t[50];
	int i,j;
	printf("Enter any string\n");
	gets(s);
	t[0]=s[0];
	for(i=1,j=1;s[i]!='\0';i++){
	    if(s[i]==' '){
	        t[j]=s[i+1];
	        j++;
	    }
	}t[j]='\0';
	printf("Acronym of the string is %s\n",t);
	return 0;
}
