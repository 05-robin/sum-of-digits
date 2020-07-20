#include<stdio.h>
int add(int);
int main()
{
	long long int num,i;
	printf("Enter the number: ");
	scanf("%lld",&num);
	i=add(num);
	printf("%d",i);
	return 0;
}
int add(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	   return ((n%10)+add(n/10));
   
}
