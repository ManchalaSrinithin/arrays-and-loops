#include<stdio.h>
main()
{
	int a[100][100],b[100][100],c[100][100],i,j,m,n,m1,n1,k;
	printf("Enter no.of rows and columns in I-matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter no.of rows and columns in II-matrix:");
	scanf("%d%d",&m1,&n1);
	if(m==m1&&n==n1)
	{
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
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
		printf("\n");
	}
	printf("%dX%d Mutiplication values are\n",m,n);
		for(i=0;i<m1;i++)
		{
		for(j=0;j<n1;j++)
		{
			printf("%5d",c[i][j]);
		}
		printf("\n");
	}
	}
	else
	printf("Enter the correct values");
}