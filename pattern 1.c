#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter you input :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=n;j>=n+1-i;j--)
		{
			printf("*");
		}
		for(j=n+2-i;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=n;j>=i+1;j--)
		{
			printf("*");
		}
		for(j=i+2;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
