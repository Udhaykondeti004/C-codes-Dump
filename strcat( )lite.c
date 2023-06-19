#include <stdio.h>

int main(void) {
	char s1[10],s2[10],s3[20];
	int i,j;
	printf("Enter 1st string\n");
	scanf("%s",s1);
	printf("Enter 2nd string\n");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++)
	s3[i]=s1[i];
	for(j=0;s2[j]!='\0';j++,i++)
	s3[i]=s2[j];
	printf("Concatinated String is %s\n",s3);
	return 0;
}

