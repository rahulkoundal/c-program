//program for the even number
//if concept
//even number is 2,4,6,8,10...
//use of printf() and scanf() function

#include<stdio.h>
int main()
{
	int a;  //decleration of the variable

	//input through the user keyboard
	printf("enter the value of number =");
	scanf("%d",&a);

	//if concept
	if(a%2==0)
	{
		printf("number is even number\n");
	}
	else
	{
		printf("number is not even \n");
	}
	return 1151;
}
