#include<stdio.h>
#define S 40
int main()
{
	char str[S],ch;
	int i=0;
	printf("enter a string :");
	do
	{
		ch=getche();
		str[i++]=ch;
	}while(ch!='\r');
	str[i]='\0';
	i=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}
}
