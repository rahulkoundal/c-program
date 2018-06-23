//whole and natural concept


#include<stdio.h>

//main() started
int main()
{
	int a,b;    //decleration of the variable

	//input through the user keyboard
	printf("enter the value of A=");
	scanf("%d",&a);

	//if else concept
	if(a>=0)
	{
		if(a>=1)
		{
			printf("number is natural and whole number\n");
		}
		else
		{
			printf("number is only whole number\n");
		}
	}
	else if(a>=1)
	{
		printf("number is natural only\n");
	}
	else
	{
		printf("number is neither nautral or not whole\n");
	}
	return 0;
}
