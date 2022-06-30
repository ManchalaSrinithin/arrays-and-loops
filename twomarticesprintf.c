#include<stdio.h>
main()
{
	int a[100][100],b[100][100],i,j,m,n,m1,n1;
	printf("Enter no.of rows and columns in I-matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter no.of rows and columns in II-matrix:");
	scanf("%d%d",&m1,&n1);
	printf("Enter %dX%d I-matrix values are:\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter %dX%d II-matrix values are:\n",m1,n1);
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	printf("second matrix values are:\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%5d",b[i][j]);
		}
		printf("\n");
	}
}