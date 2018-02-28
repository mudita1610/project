#include <stdio.h>
int main()
{
	int a = 1,b = 1,c;
	printf("Fibonacci Series Is: ");
	printf("%d%d",a,b);
	while(a = 20)
	{ 
	c = a+b;
	printf("%d",c);
	a = b;
	b = c;
	}
	
return 0;
}
