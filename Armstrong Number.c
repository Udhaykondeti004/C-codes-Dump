#include <stdio.h>

int main(void) 
     {int n, sum, m, rem;
     scanf("%d",&n);
     sum = 0;
     m = n;
    while (n>0)
   {
       rem = n%10;
       sum = sum + rem*rem*rem;
       n = n/10;
    }
     
     if (sum==m)
        printf("%d  is armstrong\n");
     else
         printf("%d is Not Armstronh\n");
               
     return 0 ;
                 }

