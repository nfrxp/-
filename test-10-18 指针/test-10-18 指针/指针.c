//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));		//64λ��������ָ���Ϊ8�ֽڣ�
//	printf("%d\n", sizeof(short*));		//���ǲ�ָͬ��������ʹ�ý����ò�����ʱ�����ʵĿռ��С��ͬ
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//
//	int a = 0x11223344;						//pa pb pc�о�Ϊa��������ַ
//	int* pa = &a;
//	*pa = 0;				//a��Ϊ0�������ĸ��ֽ�
//	printf("%p\n", pa);
//
//	a = 0x11223344;
//	char* pb = &a;
//	*pb = 0;				//ֻ����һ���ֽ�
//	printf("%p\n", pb);
//
//	a = 0x11223344;
//	short* pc = &a;
//	*pc = 0;				//ֻ����һ�������ֽ�
//	printf("%p\n", pc);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);			//�����ĸ��ֽ�
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);			//����һ���ֽ�
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	/*int* pa = a;*/
//	char* pa = a;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;
//	}
//
//	return 0;
//}