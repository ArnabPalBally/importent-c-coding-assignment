#include<stdio.h>
int main()
{
	int i,j,sum,sub;
	char x;
	printf("....");
	scanf(" %c",&x);
	scanf("%d %d",&i,&j);
	switch(x)
	{
		case 'a' : 
			 sum=i+j;
			printf("%d",sum);
			break;
		case 'b' :
			 sub = i-j;
			printf("%d",sub);
			break;
		default :
			printf("bb");
	}
}
