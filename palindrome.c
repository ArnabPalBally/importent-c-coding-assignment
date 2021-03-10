#include<stdio.h>
#define MAX 20
int main()
{
	char str[20];
	char ch;
	int i=0;
	do
	{
		ch=getchar();
		str[i++]=ch;
	}while(ch!='\n');
	str[i]='\0';
	int len=i;
	int j;
	int flag=1;
	for(j=0;j<len-1;j++)
	{
		if(str[j]==str[len-j-2])
		{
			printf("%c,%c",str[j],str[len-2-j]);
			continue;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
		printf("The word is a palindrome");
	}
	else
	{
		printf("The word is not a palindrome");
	}
}
