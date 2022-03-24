#include <stdio.h>
int main()
{	
	int a[10];
	int n,i,j;
	int temp,first,last,key,mid;
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
		printf("%d\n",a[i]);
	}
	first=0;
	last=n-1;
	printf("enter key element\n");
	scanf("%d",&key);
	while(first<=last)
	{
		mid=(first+last)/2;
		if(key==a[mid])
		{
			printf("element %d found at %d\n",key,mid+1);
			return 1;
		}	
		else if(key<a[mid])
		{
			last=mid-1;
		}
		else 
		{
			first=mid+1;
		}
	}
	printf("element %d not found\n",key); 
	return 0;
}
