#include<stdio.h>
 int main()
{
 int i,c,a=1;
 for(i=1;i<=4;i++)
 {
 for(c=1;c<=i;c++)
 {
  printf("%d",a);
  a++;
 } 
 printf("\n");
}
return 0;
}
