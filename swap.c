#include<stdio.h>

int main()
{
	int a,b;
	printf("enter the no you want to swap: ");
	scanf("%d%d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("First number:a=%d,b=%d",a,b);
	return 0;
}
