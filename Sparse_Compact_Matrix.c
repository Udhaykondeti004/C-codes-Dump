#include <stdio.h>
int main()
{
  int s_m[5][5],c_m[3][100],cou=0,i,j,r,c,k,l;
  printf("enter no. of rows & coloums \n");
  scanf("%d %d",&r,&c);
  printf("enter elements\n");
  for(i=0;i<r;i++)
  for(j=0;j<c;j++)
  scanf("%d",&s_m[i][j]);
  printf("\n\n");
  printf("sparse matrix is : \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(s_m[i][j]!=0)
      cou++;
      printf("%5d",s_m[i][j]);
    }
      printf("\n");
  }
  printf("cou=%d\n",cou);
  printf("\n\n");
  printf("compact matrix\n");
  k=0;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(s_m[i][j]!=0 && k<cou)
      {
          for(l=0;l<3;)
          {
            c_m[l][k]=i;
            printf("c_m[%d][%d]=%d\n",l,k,c_m[l][k]);
            l++;
            c_m[l][k]=j;
            printf("c_m[%d][%d]=%d\n",l,k,c_m[l][k]);
            l++;
            c_m[l][k]=s_m[i][j];
            printf("c_m[%d][%d]=%d\n",l,k,c_m[l][k]);
            break;
            }
         k++;
      }
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<cou;)
    {
      printf("%5d",c_m[i][j]);
      j++;
    }
    printf("\n");
  }
  return 0;
}  
   