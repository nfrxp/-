#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf(" ‰»Î√‹¬Î");
//	scanf("%s", password);
//	while((ch=getchar())!='\n');
//	printf("«Î»∑»œ(Y/N)");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("≥…π¶");
//	else
//			printf(" ß∞‹");
//
//		return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}


#include <windows.h>//¡∑œ∞
int main()
{
	int i = 0;
	char password[20] = {0};

	for (i = 0; i < 3;i++)
	{
	scanf("%d", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("µ«¬º≥…π¶");
			break;
		}
		else
		{
			printf("√‹¬Î¥ÌŒÛ\n");
		}

	}
	if (i == 3)
		printf("’À∫≈“—±ª∂≥Ω·");

	return 0;
}