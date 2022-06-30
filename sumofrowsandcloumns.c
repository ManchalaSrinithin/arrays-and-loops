#include<stdio.h>
main()
{

	 int i,j,m,n,a[100][100],sum;
 	printf("\n Enter Number of rows and columns: ");
 	scanf("%d %d",&m,&n);
	 printf("Enter the Matrix Elements \n");
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
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
			printf("%5d",a[i][j]);	
		}
	 		printf("%5d",sum);
			printf("\n");
	}
	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+a[j][i];
		}
	 		printf("%5d",sum);
	}
}
 
