#include<stdio.h>
int main()
{
  long n,c;
  int b,count=0;
  printf("Enter integer to calculate no. of digits: ");
  scanf("%ld",&n);
  b = (int)n;
  c = n-b;

  if(c==0)
 {
  while(n!=0)
  {
   n=n/10;
   count++;
   }
  printf(" No. of digits: %d\n",count);
}
else
printf(" please correct the number and Enter again");
return 0;
}
