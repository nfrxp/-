//#include<iostream>
//using namespace std;
//
//void test01()
//{
//	//cout.put("ads");			//cout.put()向缓冲区输出一个字符
//	cout.put('a');
//	cout.put('a').put('b');		//链式
//
//	char buf[] = "Hello world";	//cout.write( , )从buffer中写n个字节到当前输出流
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


//#include<iostream>						//格式化输出
//#include<iomanip>		//使用控制符的头文件
//using namespace std;
//
//void test01()
//{
//	int i, j;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j <= i; j++) {
//			//cout.setf(ios::left);		//没有什么效果
//			cout<< j << '*' << i << '=' << i * j<<" ";
//		}
//		cout << endl;
//	}
//
//}
//
//void test02() {			//流成员函数
//	int number = 20;
//	char a[] = "i h i ";
//	cout.fill('*');
//	cout << a << endl;
//	cout.width(6);			//设置输出宽度为6
//	cout.fill('*');			//将空替换为括号中的内容
//	cout.setf(ios::left);	//控制输出对齐格式，left左对齐
//	cout.unsetf(ios::dec);	//卸载十进制
//
//	cout.setf(ios::hex);	//设置输出格式为十六进制
//	cout.setf(ios::showbase);//强制输出整数基数		0   0x
//	cout << number << endl;
//
//	cout.unsetf(ios::hex);
//	cout.setf(ios::oct);
//	cout << number << endl;
//}
//
//void test03()			//使用控制符
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
#include<fstream>		//文件读写头文件

void test01() {		//写文件
	
	//ofstream ofs("./test.txt", ios::out | ios::trunc);		//以输出的方式打开头文件

	//后期指定打开方式
	ofstream ofs;
	ofs.open("./test.txt", ios::out | ios::trunc);
	//判断是否打打开
	if (!ofs.is_open()) {
		cout << "File open failed" << endl;
		exit;
	}
	//写入
	ofs << "姓名：小明" << "\n"
		<< "年龄：16" << "\n"
		<< "身高：170" << "\n";
	cout << "写入成功！";

}

void test02() {		//读文件
	ifstream ifs;
	ifs.open("./test.txt", ios::in);

	//判断是否打开
	if (!ifs.is_open()) {
		cout << "File open failed" << endl;
		exit;
	}

	//读取
	//第一种方式
	char buf[1024];
	while (ifs >> buf) {		//按行读取
		cout << buf << endl;
	}
	ifs.close();

	//第二种方式
	ifs.open("./test.txt", ios::in);

	//判断是否打开
	if (!ifs.is_open()) {
		cout << "File open failed" << endl;
		exit;
	}

	char buf2[1024];
	while (!ifs.eof()) {		//eof()读到文件尾
		ifs.getline(buf2, sizeof(buf2));
		cout << buf2 << endl;
	}
	ifs.close();

	//第三种方式  不推荐，按单个字符读取
	ifs.open("./test.txt", ios::in);

	//判断是否打开
	if (!ifs.is_open()) {
		cout << "File open failed" << endl;
		exit;
	}
	char c;
	while ((c = ifs.get()) != EOF) {	//EOF文件尾
		cout << c;
	}
	ifs.close();
}
int main() {
	//test01();

	test02();
	return 0;
}