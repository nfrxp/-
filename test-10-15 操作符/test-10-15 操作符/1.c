//#include<stdio.h>					//算术操作符，%用于整数
//int main()
//{
//	int i = 5;
//	int j = i % 2;
//	printf("%d", j);
//	return 0;
//}


//#include<stdio.h>									//移位操作符左移（1）.右移（2），只能是整数
//int main()										//二进制，补码
//{
//	int i = -1073741824;
//	int j = i << 2;
//	printf("%d", j);	//j=0
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = -2;
//	int j = i >> 2;
//	printf("%d", j);
//	return 0;
//}

//#include<stdio.h>										//位操作符，二进制
//int main()
//{
//	int i = 3;
//	int j = 5;
//	printf("%d\n", i & j);			//按位与
//	printf("%d\n", i | j);			//按位异
//	printf("%d\n", i ^ j);			//按位异或，相异为真
//	return 0;
//}


//#include<stdio.h>								//面试题，不创建零时变量，实现两个数的交换
//int main()				//1.加减法（会溢出）
//{
//	int i = 3;
//	int j = 5;
//	printf("i=%d\n", i);
//	printf("j=%d\n", j);
//	i = i + j;
//	j = i - j;
//	i = i - j;
//	printf("i=%d\n", i);
//	printf("j=%d\n", j);
//
//	return 0;
//}


//int main()					//2.按位异或
//{
//	int i = 3;
//	int j = 5;
//	printf("i=%d\n", i);
//	printf("j=%d\n", j);
//	i = i ^ j;
//	j = i ^ j;
//	i = i ^ j;
//	printf("i=%d\n", i);
//	printf("j=%d\n", j);
//	return 0;
//}


#include<stdio.h>							//求一整数的二进制形式中1的个数
//int main()						//模十，除十；模二，除二。(负数不行)
//{
//	int i = 3;
//	int count = 0;
//	while (i)
//	{
//		if (i % 2 == 1)
//			count++;
//		i /= 2;
//	}
//	printf("%d", count);
//	return 0;
//}

int main()									//按位取与
{
	int i = -1;
	int j = 0;
	int count = 0;
	while (j<32)
	{
		if (i & (1 << j))
		{
			count++;
		}
		j++;
	}
	printf("%d", count);
	return 0;
}