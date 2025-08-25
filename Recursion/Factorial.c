//Recursive program to calculate fatorial of a number
#include<stdio.h>
int calculateFact(int n)
{
	if(n<=0)
		printf("Enter a number greater than 0");
	
	if(n==1)
		return 1;
	else
		return n * calculateFact(n-1);
}
int main()
{
	int n;
	printf("Enter a number to find it's factorial: ");
	scanf("%d",&n);
	int fact = calculateFact(n);
	printf("The factorial of %d is %d.",n,fact);
	
	return 0;
}