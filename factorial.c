//WAP to find the factorial of a number?
#include<stdio.h>
long int fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("Fact. is %ld\n",fact(n));
}
