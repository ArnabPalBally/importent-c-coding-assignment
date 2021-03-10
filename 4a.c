#include<stdio.h>
int main()
{
	int year;
	printf("Please enter a year :");
	scanf("%d",&year);
	if(((year%100!=0)&&(year%4==0))||(year%400==0))
	{
		printf("year is leap year");
	}
	else
	{
		printf("not leapyear");
	}
	return 0;
}
