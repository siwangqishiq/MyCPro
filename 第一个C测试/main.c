#include <stdio.h>

#include "test.h"

int main()
{
	int c=0;
	printf("你好 世界!\n");
	show();
	c=sum(10,13);
	printf("计算结果为--> %d\n",c);

	return 1;
}