#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void test01() {
	char a;
	int b;
	while (1) {
		if (_kbhit())
		{
			b = _getch();
			if (b == 61)
				cout << "��ȡ�˵Ⱥ�";
		}
	}
	//a = _getche();
	//a=cin.peek();
}

void test02() {
	string a;
	a = cin.peek();
	//while (1) {
	//	if(cin.peek()=='=')

	//}
}

void test03() {
	char a[90];
	char b[90]; 
	int i;
	for (i = 0; 1; i++) {
		
		a[i] = _getch();
		cout << a[i];
		if(a[i]!='=')
		ungetc(a[i],stdin);
		b[i] = getchar();
		if (a[i] == '=')
			break;
	}
	for (i = 0; a[i] != '\0'; i++) {
		cout << a[i];
	}

}
int main() {
	//test02();
	test03();
	return 0;
}


//#include <conio.h>
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int ch;
//    while (1) {
//        if (_kbhit()) {//����а������£���_kbhit()����������
//            ch = _getch();//ʹ��_getch()������ȡ���µļ�ֵ
//            
//            cout << ch;
//            if (ch == 27) { break; }//������ESCʱѭ����ESC���ļ�ֵʱ27.
//        }
//    }
//    system("pause");
//}