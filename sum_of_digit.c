//sum of digit program
//printf() and scanf() function use
//while and modulas and divide operator concept
//if given digit 124 sum=7

#include<stdio.h>
int main()
{
	int a,n,sum=0; //intialization and decleration of the variable

	//user input through the keyboard
	
	printf("enter the value of A=");
	scanf("%d",&a);

	//while loop concept
	
	while(a>0)
	{
		n=a%10;
		sum+=n;  //sum=sum+n
		a/=10;   /*a=a/10*/
	}
	 
	printf("the sum of digit A=%d\n",sum);

	return 1151;
}


