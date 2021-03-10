#include<stdio.h>
int main()
{
	int i,j,n,a=122;
	printf("ee");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(a<97)
			{
				a=122;
			}
			printf("%c",a);
			a--;
		}
		printf("\n");
	}
}
