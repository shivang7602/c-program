#include <stdio.h>
int main()
{	
	int a[10];
	int n,i,j;
	int temp;
	printf("enter the number of integers\n");
	scanf("%d",&n);
	printf("enter the integers to be sorted\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
				{
				 temp=a[j];
			 	 a[j]=a[j+1];
				 a[j+1]=temp;
				}
		}
	}
	printf("the sorted array is \n");
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
	
