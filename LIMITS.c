#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short:\nSigned: %hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("UnSigned: %hu to %hu\n",0,USHRT_MAX);
	printf("\n");
	printf("integer:\nSigned: %d to %d\n",INT_MIN,INT_MAX);
	printf("UnSigned: %u to %u\n",0,UINT_MAX);
	printf("\n");
	printf("long long int:\nSigned: %ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("UnSigned: %lu to %lu\n",0,ULONG_MAX);
	printf("\n");
	printf("long long int:\nSigned: %lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("UnSigned: %llu to %llu\n",0,ULONG_LONG_MAX);
}
