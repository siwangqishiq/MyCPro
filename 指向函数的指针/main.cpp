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

	p(10,20);//��һ�ֵ���
	(*p)(33,39);//�ڶ��ֵ���

	return 1;
}