#include<stdio.h>
int main()
{
	int i,j,n,fact;
	
	printf("enter the value of n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				fact++;
			}


		}

		if(fact==2)
		{
			printf("%d\n",i);
		}
	}
}
