#include<stdio.h>
void swap(int *x,int *y)
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
	scanf("%d",&a);
	printf("ee");
	scanf("%d",&b);
	swap(&a,&b);
	printf("%d %d ",a,b);
	return 0;
}
