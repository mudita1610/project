#include<stdio.h>

void main()
{
	int n,i,a;
	char ch;
	printf("Enter any number");
	scanf("%d",&n);
	if(n>0)
	{
		printf("Whether you want to find factorial or not\n1.Y\n2.N\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("Factors are\n");
				for(i=1;i<=n;i++)
				{
					if(n%i==0)
					{
						printf("%d\n",i);
					}
					
				}
				break;
			default:
				printf("Thank you");
				break;
			
		}
		
		
	}
	else if(n==0)
	{
		printf("Enter number is Zero\nThank you");
			
	}
	else
	{
		printf("Number Enter is Negative\nThank you");
	}
}
