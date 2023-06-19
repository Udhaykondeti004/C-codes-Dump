#include <stdio.h>

int main(void) {
    int i,j,sp;
     for(i=1; i<=5; i++)
     {
         for(sp=5; sp>i; sp--)
         printf(" ");
         for(j=1; j<=i; j++)
         printf("* ");
         printf("\n");
     }
     
	return 0;
}

