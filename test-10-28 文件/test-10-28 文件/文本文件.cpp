//#include<iostream>												//文本文件
//#include<fstream>
//using namespace std;
//
//void test01()											//写文件
//{
//	//1、包含头文件
//	//2、创建流对象
//	ofstream ofs;
//
//	//3、指定打开方式
//	ofs.open("test.txt", ios::out);
//
//	//4、写内容
//	ofs << "姓名：张三" << endl;
//
//	//5、关闭文件
//	ofs.close();
//}
//int main()
//{
//	test01();
//	return 0;
//}



//#include<iostream>										//读文件
//using namespace std;
//#include<fstream>
//#include<string>
//
//void test01()
//{
//	//1.包含头文件
//	//2.创建流对象
//	ifstream ifs;
//
//	//3.指定打开方式并判断是否打开成功
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败\n";
//		return;
//	}
//
//	//4.读数据
//	
//	////第一种读数据
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////第二种读数据
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, 1024))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////第三种读数据
//	//string buf;
//	//while (getline(ifs,buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////第四种读数据
//	//char c;
//	//while ((c = ifs.get()) != EOF)
//	//{
//	//	cout << c << endl;
//	//}
//
//	//5.关闭文件
//	ifs.close();
//}
//int main()
//{
//	test01();
//	return 0;
//}