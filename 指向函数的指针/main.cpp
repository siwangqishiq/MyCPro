#include <stdio.h>


int add(int a,int b)
{
	int c=a+b;
	printf("%d + %d = %d\n",a,b,c);
	return c;
}

int main()
{
	int (*p)(int,int);
	p=add;

	p(10,20);//第一种调用
	(*p)(33,39);//第二种调用

	return 1;
}