#include<stdio.h>
main()
{
	int a[10][10],i,j,m,n,sum=0;
	printf("Enter the order of the matrix:");
	scanf("%d %d",&m,&n);
	printf("Enter the array elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<i-m;i++)
	{
		for(j=0;j<j-n;j++)
		{	
			sum=sum+a[i][j];
		}
		printf("\n");
	}
	
	printf("The sum of elements are:%d\n",sum);
}