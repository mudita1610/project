#include<stdio.h>
int main()
{
	int num,gcd,a,b,c;	
	printf("Enter the no.");
	scanf("%d",&num);
	if (num%2 == 0)
	{
		printf("Enter 2 numbers: ");
		scanf("%d%d",&a,&b);
		if (b<a)
		{
		c = a;
		a = b;
		b = c;
		}
		while(b!=0)
		{
		gcd = a%b;
		a = b;
		b = gcd;
		}
		printf("GCD of two no.is %d",gcd);
	}
	else
	printf("Good Bye");
return 0;

}
