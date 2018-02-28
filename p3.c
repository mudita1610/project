#include<stdio.h>
int main()
{
  int i,j,n,k=0;
  printf("how many numbers do you want in your array :");
  scanf("%d",&n);
  int array[n];
  for(i=0;i<n;i++)
 {printf("enter number at position %d :",i);
  scanf("%d",&array[i]);
  } 
  for(i=0;i<n;i++)
 {printf("number ( %d) : %d\n",i+1,array[i]);
  } 
  printf("after deleting duplicate elemets array:\n{");
  for(i=0;i<n;i++)
   {
     for(j=0;j<n;)
     {if(array[j]==array[i]&&j!=i)
    { for(k=j;k<n;k++)
     { array[k]=array[k+1];
    
     } n=n-1;}
    else j++; }}
      for(i=0;i<n;i++)
 {printf("%d ",array[i]);
  } 
 
  {printf("} \n");
  } 
  }
