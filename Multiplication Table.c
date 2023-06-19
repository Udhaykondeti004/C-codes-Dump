#include <stdio.h>

int main(void) {
     int n,i,p;
     
    scanf("%d",&n);
    i = 1;
    while (i<=10)
   {
       p = n*i;
       printf("%d * %d\n",n,i,p);
       i++;
   }
            
         	
         
         return 0;
}

