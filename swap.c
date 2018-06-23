#include<stdio.h>
int main()
{
	int a,b,c;
	//input through the keyboard
	printf("enter the value of A=");
	scanf("%d",&a);
	printf("enter the value of the B=");
	scanf("%d",&b);
	printf("\nthe number before the swapping A=%d and b=%d",a,b);
	//additon of the number
	c=a;
	a=b;
	b=c;
	printf("\n the number after the swapping A=%d and b=%d",a,b);
}
