#include<stdio.h>
#include<math.h>
int main()
{
	int x,i,y=0;
	for(x=1;x<=5;x++)
	{
		y=y+pow(x,5);
	}
	printf("%d",y);
}
