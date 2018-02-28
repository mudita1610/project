
#include <stdio.h> 
int main() 
{ 
  int i, class[5],sum = 0; 
  printf("Enter 5 numbers:\n"); 
  for(i = 0; i < 5; ++i) 
  { 
      // (class + i) is equivalent to &class[i] 
      scanf("%d",(class + i)); 

      // *(class + i) is equivalent to class[i] 
      sum += *(class + i); 
  } 
  printf("sum = %d", sum); 
  return 0; 
}


