#include<stdio.h>
int main()

{
    int n,a,b;
     printf("Enter the starting and ending no. of range: ");
     scanf("%d%d",&a,&b);
      printf(" Odd numbers are: ");
      for(n=a;n<=b;n++)
         if(n%2!=0)
           printf("%d ",n);
        printf("\nEven numbers are: ");
           for(n=a;n<=b;n++)
             if(n%2==0)
               printf("%d ",n);
return 0;
}       


