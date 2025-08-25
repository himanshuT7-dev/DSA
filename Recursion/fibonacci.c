//Recursive program to find fiboncci of nth number.
#include<stdio.h>
int calcFibo(int n)
{
	if(n==0)
    	return 0;
    	
    if(n==1)
    	return 1;
    	
    else
    	return calcFibo(n-1)+calcFibo(n-2);
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int fibo = calcFibo(n);
	
	printf("Fibonacci series of %dth number is %d",n,fibo);
	
	return 0;
}