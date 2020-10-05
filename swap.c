#include<stdio.h>

int main()
{
	int a=1,b=3;
	a=b-a;
	b=a;
	a=a+b;
	printf("a=%d,b=%d",a,b);
	return 0;
}
