#include<stdio.h>
#define S 40
int main()
{
	char str[]="a quick brown fox jumped over a lazy dog";
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
	return 0;
}
