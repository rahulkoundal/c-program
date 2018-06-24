//prime number program
//kali linuv vi edititor programming
//for loop and if concept
//prime number are 1,3,5,7,11,13,17,19....
//printf() and scanf() function use


#include<stdio.h>
int main()
{
	int a,i,prime=0;	//decleration of the variable

	//user input the number through the keyboard
	printf("enter the number A=");
	scanf("%d",&a);

	//for loop and if
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			prime++;
			break;
		}

	}

	//comparision operator
	if(prime==0)
	{
		printf(" number is prime\n");
	}
	else
	{
		printf("number is not prime\n");
	}
	 return 1151;
}
