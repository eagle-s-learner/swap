#include<stdio.h>

int main()
{
	int a,b;
	printf("enter both no");
	scanf("%d%d",&a,&b);
	a=b-a;
	b=a;
	a=a+b;
	printf("a=%d,b=%d",a,b);
	return 0;
}
