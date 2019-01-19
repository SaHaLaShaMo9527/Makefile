#include "stdio.h"
#include "add.h"
#include "reduce.h"

int main(void)
{
	int a,b;
	a=3;b=4;
	printf("a+b=%d",add(a,b));
	printf("a-b=%d",reduce(a,b));
	return 0;
}
