//Program to find second maximum and minimum element from array
#include<stdio.h>
int main()
{
	int a[] = {7,8,9,8,12,10};
	int max=a[0];
	int min=a[0];
	int n = sizeof(a)/sizeof(a[0]);
	
	for (int i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		
		else if(a[i]<min)
			min=a[i];
	}
	
	int second_max=min;
	int second_min=max;
	
	for (int i=0;i<n;i++)
	{
		if(a[i]>second_max && a[i]<max)
			second_max=a[i];
		
		if(a[i]<second_min && a[i]>min)
			second_min=a[i];
	}
	
	if(second_max == min)
		printf("No second maximum element exists!");
	else
		printf("Second Maximum is %d\n",second_max);
		
	if(second_min == max)
		printf("No second minimum element exist");
	else
		printf("Second Minimum is %d\n",second_min);

}