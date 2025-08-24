//Reverse an array

#include<stdio.h>
int main()
{
	int a[]={36, 68, 74, 8, 9};
	int n= sizeof(a)/sizeof(a[0]);
	int temp=0;
	int j=n-1;
	
	printf("Array before reverse:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(int i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	
	printf("Array after reverse:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}