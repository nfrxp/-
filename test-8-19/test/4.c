#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int line = 0;
	printf("加入我们");
	while (line <= 20000) 
	{
		printf("才敲了一行代码,%d\n", line);
		line ++ ;

	}
	if (line > 20000)
		printf("好offer");




	return 0;
}