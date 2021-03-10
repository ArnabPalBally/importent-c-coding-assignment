#include<stdio.h>
int swap(int *x,int *y)
{
	printf("ee");
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
int main()
{
	int a,b;
	printf("ee");
	scanf("%d, %d ",&a,&b);
	swap(&a,&b);
	printf("%d %d ",a,b);
}
