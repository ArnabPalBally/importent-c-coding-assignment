#include<stdio.h>
#define S 40
int main()
{
	char str[S],ch,character;
	int i=0,count=0,len=0;
	printf("enter a string :");
	do
	{
		ch=getchar();
		str[len++]=ch;
	}while(ch!='\n');
	str[len]='\0';
	printf("enter a charecter :");
	scanf("%c",&character);
	while(str[i]!='\0')
	{
		if(str[i]==character)
		{
			count++;
		}
		i++;
	}
	printf("%d",count);
}
