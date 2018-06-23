//leap year concept
//by using the if else
#include<stdio.h>

int main()
{
	int year;

        printf("enter the year ");
	scanf("%d",&year);
	//if else concept
	if(year%4==0)
	{
		if(year%100==0&&year%400!=0)
		{
			printf("year is anot  leap year\n");
		}
		else
		{
			printf("year is a leap year\n");
		}
	}
	else
	{
		printf("year is not leap year\n");
	}
	return 1;
}
