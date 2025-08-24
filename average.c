#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int avg, sum=0;
	
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	avg = sum/n;
	
	printf("The average is: %d ",avg);
}