#include <stdio.h>

int main(void) {
	char s[30];
	int i,vc,cc,dc,sc;
	printf("Enter any string");
	scanf("%s",s);
	vc=cc=dc=sc=0;
	for(i=0;s[i]!='\0';i++){
	    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	    vc++;
	    else
	    if(s[i]>='a'&&s[i]<='z')
	    cc++;
	    else
	    if(s[i]>='0'&&s[i]<='9')
	    dc++;
	    else
	    sc++;
	}printf("No. of Characters are %d\n",i);
	 printf("No. of Vowels are %d\n",vc);
	 printf("No. of Consonants are %d\n",cc);
	 printf("No. of Digits are %d\n",dc);
	 printf("No. of Special Characters are %d\n",sc);
	
	return 0;
}

