//
//#include<iostream>							//����������
//#include<iomanip>
//using namespace std;
//int main() {
//	double a[] = { 1.1,11.11,111.111,1111.1111 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//cout.width(10);	//����������
//		//cout << a[i] << endl;
//
//		cout << setw(10) << a[i] << endl;
//	}
//	return 0;
//}


//#include<iostream>						//���ö����ʽ
//#include<iomanip>
//using namespace std;
//int main() {
//	//int year[] = { 18.5,19,16,11.5,20 };
//	float year[] = { 18.5,19,16,11.5,20 };
//	string name[] = { "Jack","Zoo","Jammy","Beny","Junny" };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//cout.width(5);
//		//cout << setiosflags(ios_base::left) << year[i] << setw(10)
//		//	<< resetiosflags(ios_base::left) << name[i] << endl;
//
//		cout.width(5);
//		cout << setiosflags(ios_base::left) <<setprecision(1)<< year[i] << setw(10)
//			<< resetiosflags(ios_base::left) << name[i] << endl;
//
//	}
//	return 0;
//}

////11_5.cpp
//#include <fstream>
//using namespace std;
//struct Date {
//	int mon, day, year;
//};
//int main() {
//	Date dt = { 6, 10, 92 };
//	ofstream file("date.dat", ios_base::binary);
//	file.write(reinterpret_cast<char*>(&dt), sizeof(dt));
//	file.close();
//	return 0;
//}

//11_6.cpp
/*����ģ��toString���԰Ѹ���֧�֡�<<������������͵Ķ���ת��Ϊ�ַ�����*/
//#include <iostream>
//#include <sstream>
//#include <string>
//using namespace std;
//
//template <class T>
//inline string toString(const T& v) {
//	ostringstream os;	//�����ַ��������
//	os << v;		//������v��ֵд���ַ�����
//	return os.str();	//������������ɵ��ַ���
//}
//
//int main() {
//	string str1 = toString(5);
//	cout << str1 << endl;
//	string str2 = toString(1.2);
//	cout << str2 << endl;
//	return 0;
//}


//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	char a;
//	while ((a=cin.get()) != EOF) {
//		cout << setw(3);
//		cout.put(a) << endl;
//	}
//	return 0;
//}

#include<iostream>
#include<string>
using namespace std;
int main() {
	string a;
	getline(cin, a, 't');		//getline��ȡ�ַ������Զ�����ֹ�ַ�
	cout << a << endl;
	return 0;
}
