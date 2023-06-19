#include <stdio.h>

int main(void) {
         int n, a, b, i, c;
         printf("Enter n value\n");
         scanf("%d", &n);
         a = 0;
         b = 1;
         printf("%d\n%d\n",a,b);
         i = 3;
         while(i<=n)
         {
             c = a+b;
             printf("%d\n" ,c);
             a = b;
             b = c;
             i++;
             
         }
         
	return 0;
}

