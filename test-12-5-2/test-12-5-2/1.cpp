//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//
//#include<fstream>
//using namespace std;
//
//class Person {
//public:
//	Person() {}
//	Person(const char* name, int age) {
//		strcpy(this->mName, name);
//		this->mAge = age;
//	}
//public:
//	char mName[64];
//	int mAge;
//};
//
//int main() {
//
//	const char* fileName = "person.txt";
//	//二进制模式读写文件
//	//创建文件对象输出流
//	ofstream osm(fileName, ios::out | ios::binary);
//
//	Person p1("John", 33);
//	Person p2("Edward", 34);
//
//	//Person对象写入文件
//	osm.write((const char*)&p1, sizeof(Person));
//	osm.write((const char*)&p2, sizeof(Person));
//
//	//关闭文件输出流
//	osm.close();
//
//	//从文件中读取对象数组
//	ifstream ism(fileName, ios::in | ios::binary);
//	if (!ism) {
//		cout << "打开失败!" << endl;
//	}
//
//	Person p3;
//	Person p4;
//
//	ism.read((char*)&p3, sizeof(Person));
//	ism.read((char*)&p4, sizeof(Person));
//
//	cout << "Name:" << p3.mName << " Age:" << p3.mAge << endl;
//	cout << "Age:" << p4.mName << " Age:" << p4.mAge << endl;
//
//	//关闭文件输入流
//	ism.close();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}

#include<iostream>
using namespace std;
int main() {
	// BYTEPORT;
	return 0;
}
