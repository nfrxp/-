//#include<iostream>												//�ı��ļ�
//#include<fstream>
//using namespace std;
//
//void test01()											//д�ļ�
//{
//	//1������ͷ�ļ�
//	//2������������
//	ofstream ofs;
//
//	//3��ָ���򿪷�ʽ
//	ofs.open("test.txt", ios::out);
//
//	//4��д����
//	ofs << "����������" << endl;
//
//	//5���ر��ļ�
//	ofs.close();
//}
//int main()
//{
//	test01();
//	return 0;
//}



//#include<iostream>										//���ļ�
//using namespace std;
//#include<fstream>
//#include<string>
//
//void test01()
//{
//	//1.����ͷ�ļ�
//	//2.����������
//	ifstream ifs;
//
//	//3.ָ���򿪷�ʽ���ж��Ƿ�򿪳ɹ�
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��\n";
//		return;
//	}
//
//	//4.������
//	
//	////��һ�ֶ�����
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////�ڶ��ֶ�����
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, 1024))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////�����ֶ�����
//	//string buf;
//	//while (getline(ifs,buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////�����ֶ�����
//	//char c;
//	//while ((c = ifs.get()) != EOF)
//	//{
//	//	cout << c << endl;
//	//}
//
//	//5.�ر��ļ�
//	ifs.close();
//}
//int main()
//{
//	test01();
//	return 0;
//}