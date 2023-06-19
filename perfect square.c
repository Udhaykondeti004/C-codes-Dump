#include <stdio.h>
#include <math.h>
 
int main()
{
    int num;
    int i;
    float j;
  
    printf("Enter an integer number: ");
    scanf("%d",&num);
  
    j=sqrt(num);
    i=j;
 
    if(i==j)
        printf("%d is a perfect square.",num);
    else
        printf("%d is not a perfect square.",num);
      
    return 0;
}