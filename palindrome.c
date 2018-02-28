#include<stdio.h>
int main()
{
	int a,b = 0,rem;
	printf("Enter the no.");
	scanf("%d",&a);
	while(a!=0)	
	{
	rem = a%10;
	b=b*10+rem;
	a = a%10;
	}
	if (a == b)
	printf("No. is palindrome");
	else
	printf("No. is not a palindrome");

return 0;

}
