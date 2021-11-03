#include<stdio.h>
int main()
{
	int min,r,d;
	scanf("%d",&min);
	r=min/60;
	d=min%60;
	printf("%d hour(s) %d minute(s)",r,d);
}
