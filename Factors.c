#include <stdio.h>

int main(void) {
     int n,i,p;
     
    scanf("%d",&n);
    i = 1;
    while (i<=n)
   {
       if (n%i == 0)
       printf("%d * %d = %d\n",i,n/i,n);
       i++;
   }
            
         	
         
         return 0;
}

