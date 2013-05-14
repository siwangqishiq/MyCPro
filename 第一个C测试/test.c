#include <stdio.h>

void show()
{
	printf("Show!\n");
}

int sum(int a,int b)
{
	int c = a + b;
	printf("%d + %d = %d\n",a,b,c);
	
	return c;
}