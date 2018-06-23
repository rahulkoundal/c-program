//swapping of the two number 
#include<stdio.h>
//#include<conio.h>
//main() function i started
int main()
{
	int a,b;
	//clrscr();

	printf("enter the value of A and B\n");
	scanf("%d\n%d",&a,&b);
	//swapping of the number by using the +,-
	/*a=a+b;
	b=a-b;
	a=a-b;*/
	//swapping of two number by using *,/
	a=a*b;
	b=a/b;
	a=a/b;
	printf(" value of A=%d and b=%d",a,b);
	//getch();
	return 10;
}	
