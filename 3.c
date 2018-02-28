#include<stdio.h>
void main()
{
  int i,k,m,num,j=4;
  for(i=1,m=4;i<=5;i++,m--)
  { 
    for(j=1;j<=m;++j)
    printf(" ");
    for(k=1,num=i;k<=i;k++,num++)
      printf("%d",num);
      num--;
    for(k=1;k<i;k++)
     {
     num-- ;
       printf("%d",num);
     }
    printf("\n");
   }
}
