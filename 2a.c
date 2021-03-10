#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	double d;
	printf("Enter the value of :");
	scanf("%d %f %c %ld",&a,&b,&c,&d);
	printf(" a=%d ,b =%f ,c=%c , d=%ld",a,b,c,d);
	printf("\n %d %d %d %d",&a,&b,&c,&d);
	printf("\n %u %u %u %u",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
	return 0;
}
