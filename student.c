#include<stdio.h>
main()
{
	int a[100],i,n,sum=0,avg;
	char str[100];
	printf("Enter number of subjects:");
	scanf("%d",&n);
	printf("Enter subject names:");
	for(i=0;i<n;i++)
	{	
		scanf("%s",&str[i]);
	}
	printf("Enter marks of student marks:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum of the marks of all subjects:%d",sum);
	avg=sum/n;
	printf("\nAverage marks of all sublects:%d",avg);
}
	
	