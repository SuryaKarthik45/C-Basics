#include<stdio.h>
void main()
{
	int n,sum1,sum2,sum3;
	scanf("%d",&n);
	sum1=n*(n+1)*0.5;
	sum2=n*(n+1);
	sum3=n*n;
	printf("sum of first %d natural numbers is %d\n",n,sum1);
	printf("sum of first %d even numbers is %d\n",n,sum2);
	printf("sum of first %d odd numbers is %d",n,sum3);
	2
}
