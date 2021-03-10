#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ee:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d",a);
		}
		else
		{
			printf("%d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d",b);
		}
		else
		{
			printf("%d",c);
		}
	}
	int t =(a>b)?(a>c?a:c):(b>c?b:c);
	printf(" \n %d",t);
	return 0;
}
