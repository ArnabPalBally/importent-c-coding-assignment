#include<stdio.h>
#include<math.h>
int main()
{
	int i,r,n,n1,n2,sum=0;
	printf("Enter the number :");
	scanf("%d",&n);
	n1=n;
	n2=n;
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	printf("%d \n",i);
	while(n1!=0)
	{
		r=n1%10;
		sum=sum+pow(r,i);
		n1=n1/10;
	}
	printf("%d\n",sum);
	if(sum==n2)
	{
		printf("armstrong number");
	}
	else
	{
		printf(" it not armstrong number .");
	}
}
