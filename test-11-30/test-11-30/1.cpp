//#include<iostream>
//using namespace std;
//
//void test01()
//{
//	//cout.put("ads");			//cout.put()�򻺳������һ���ַ�
//	cout.put('a');
//	cout.put('a').put('b');		//��ʽ
//
//	char buf[] = "Hello world";	//cout.write( , )��buffer��дn���ֽڵ���ǰ�����
//	cout.write(buf, sizeof(buf));
//
//
//}
//int main() {
//
//	test01();
//	system("pause");
//	return 0;
//}


//#include<iostream>						//��ʽ�����
//#include<iomanip>		//ʹ�ÿ��Ʒ���ͷ�ļ�
//using namespace std;
//
//void test01()
//{
//	int i, j;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j <= i; j++) {
//			//cout.setf(ios::left);		//û��ʲôЧ��
//			cout<< j << '*' << i << '=' << i * j<<" ";
//		}
//		cout << endl;
//	}
//
//}
//
//void test02() {			//����Ա����
//	int number = 20;
//	char a[] = "i h i ";
//	cout.fill('*');
//	cout << a << endl;
//	cout.width(6);			//����������Ϊ6
//	cout.fill('*');			//�����滻Ϊ�����е�����
//	cout.setf(ios::left);	//������������ʽ��left�����
//	cout.unsetf(ios::dec);	//ж��ʮ����
//
//	cout.setf(ios::hex);	//���������ʽΪʮ������
//	cout.setf(ios::showbase);//ǿ�������������		0   0x
//	cout << number << endl;
//
//	cout.unsetf(ios::hex);
//	cout.setf(ios::oct);
//	cout << number << endl;
//}
//
//void test03()			//ʹ�ÿ��Ʒ�
//{
//	int number = 20;
//
//	cout << setw(6)
//		<< setfill('*')
//		<<setiosflags(ios::showbase)
//		<<setiosflags(ios::left)
//		<<hex
//		<< number
//		<<oct
//		<<"\n"
//		<<number
//		<< endl;
//}
//int main() {
//	//test01();
//
//	//test02();
//
//	test03();
//	return 0;
//}

#include<iostream>
using namespace std;
#include<fstream>		//�ļ���дͷ�ļ�

void test01() {		//д�ļ�
	
	//ofstream ofs("./test.txt", ios::out | ios::trunc);		//������ķ�ʽ��ͷ�ļ�

	//����ָ���򿪷�ʽ
	ofstream ofs;
	ofs.open("./test.txt", ios::out | ios::trunc);
	//�ж��Ƿ���
	if (!ofs.is_open()) {
		cout << "File open failed" << endl;
		exit;
	}
	//д��
	ofs << "������С��" << "\n"
		<< "���䣺16" << "\n"
		<< "��ߣ�170" << "\n";
	cout << "д��ɹ���";

}

void test02() {		//���ļ�
	ifstream ifs;
	ifs.open("./test.txt", ios::in);

	//�ж��Ƿ��
	if (!ifs.is_open()) {
		cout << "File open failed" << endl;
		exit;
	}

	//��ȡ
	//��һ�ַ�ʽ
	char buf[1024];
	while (ifs >> buf) {		//���ж�ȡ
		cout << buf << endl;
	}
	ifs.close();

	//�ڶ��ַ�ʽ
	ifs.open("./test.txt", ios::in);

	//�ж��Ƿ��
	if (!ifs.is_open()) {
		cout << "File open failed" << endl;
		exit;
	}

	char buf2[1024];
	while (!ifs.eof()) {		//eof()�����ļ�β
		ifs.getline(buf2, sizeof(buf2));
		cout << buf2 << endl;
	}
	ifs.close();

	//�����ַ�ʽ  ���Ƽ����������ַ���ȡ
	ifs.open("./test.txt", ios::in);

	//�ж��Ƿ��
	if (!ifs.is_open()) {
		cout << "File open failed" << endl;
		exit;
	}
	char c;
	while ((c = ifs.get()) != EOF) {	//EOF�ļ�β
		cout << c;
	}
	ifs.close();
}
int main() {
	//test01();

	test02();
	return 0;
}