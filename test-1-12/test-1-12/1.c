#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//void test01() {
//	printf("test01\n");
//}
//int main() {
//
//	////ָ������
//	int* b[4];
//
//	//����ָ��
//	int c[3][2] = {1,2,3,4,5,6};
//	int(*d)[2] = c;
//
//	//����ָ��
//	void (*func)() = &test01;
//	void (*func)(const char*) = &test01;
//
//	//����ָ������
//	int (*func2[3])();
//	return 0;
//}


//ʵ�ּ������ļ�����(��ѡ���������,����������)
#include<stdio.h>

void menu() {
	printf("**********************\n");
	printf("**  1.add    2.sub  **\n");
	printf("**  3.mul    4.div  **\n");
	printf("**       0.exit     **\n");
	printf("**********************\n");
}

float add(float a, float b) {
	return a + b;
}
float sub(float a, float b) {
	return a - b;
}
float mul(float a, float b) {
	return a * b;
}
float div(float a, float b) {
	return a / b;
}
int main() {
	int input = 0;
	float a = 0, b = 0;
	//����ָ������
	//ת�Ʊ�
	float (*func[5])(float a, float b) = { 0,add,sub,mul,div };

	//ָ����ָ�������ָ��
	float(*(*ffunc)[5])(float a, float b) = &func;
	do {
		menu();
		scanf("%d", &input);
		printf("��ѡ���������:");
		if (input == 0) {
			printf("�˳�!\n");
			break;
		}
		else if (input >= 1 && input <= 4) {
			printf("����������:");
			scanf("%f %f", &a, &b);
			//printf("%f/%f=%f\n", a, b, (*func[input])(a, b));
			printf("=%f\n", (*func[input])(a, b));
			break;
		}
		else {
			printf("����������!\n");
		}
		//switch (input) {
		//case 1:
		//	scanf("%f %f", &a, &b);
		//	printf("%f+%f=%f\n", a, b, (*func[input])(a, b));
		//	break;
		//case 2:
		//	scanf("%f %f", &a, &b);
		//	printf(" %f + %f = %f\n", a, b, (*func[input])(a,b));
		//	break;
		//case 3:
		//	scanf("%f %f", &a, &b);
		//	printf("%f*%f=%f\n", a, b, (*func[input])(a,b));
		//	break;
		//case 4:
		//	scanf("%f %f", &a, &b);
		//	printf("%f/%f=%f\n", a, b, (*func[input])(a,b));
		//	break;
		//case 0:
		//	break;
		//default:
		//	printf("�������,����������!\n");
		//	break;
		//}
	} while (input);
	return 0;
}