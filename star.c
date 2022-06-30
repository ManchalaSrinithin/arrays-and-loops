#include<stdio.h>
main()
{
	int  i,j,k,n;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=n;i!=0;i--)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
}