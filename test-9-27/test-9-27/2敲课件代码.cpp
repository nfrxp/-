//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "Hello world!"<<endl ;
//	cout << "Welcome to C++!";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int radius;
//	cout << "Please enter the radius!" << endl;
//	cin >> radius;
//	cout << "The radius is " << radius << endl;
//	cout << "PI is" << 3.14 << endl;
//	cout << "Please enter a different radius!" << endl;
//	cin >> radius;
//	cout << "Now the radius is changed to " << radius << endl;
//	return 0;
//}

//#include<iostream>				//���ų��������ԣ�
//using namespace std;
//int main()
//{
//	int radius;
//	const double PI(3.1415926);
//	cout << "Please enter a radius!" << endl;
//	cin >> radius;
//	cout << "The radius is " << radius << endl;
//	cout << "�� is " << PI << endl;
//	cout << "Please enter a different radius!" << endl;
//	cin >> radius;
//	cout << "The radius is changed to " << radius << endl;
//	cout << "�� is still " << PI << endl;
//	return 0;
//}

//#include <iostream>				//��ͬ������������ֵ
//#include <climits>  				//����ֵ��ͷ�ļ�
//using namespace std;
//int main()
//{
//	cout << "1.Min of short is :" << SHRT_MIN << endl;//
//	cout << "2.Max of short is : " << SHRT_MAX << endl;//
//	cout << "3.Min of int is : " << INT_MIN << endl;//;
//	cout << "4.Max of int is : " << INT_MAX << endl;//
//	cout << "5.Min of long is : " << LONG_MIN << endl;//
//	cout <<"6.Max of long is : " << LONG_MAX << endl;//
//	cout << "7.Max of unsigned short is :" << USHRT_MAX << endl;//
//	cout << "8.Max of unsigned int is :" << UINT_MAX << endl;//4�ֽ�
//	cout << "9.Max of unsigned long is : " << ULONG_MAX << endl;//4�ֽ�
//	cout << "10.Max of unsigned long long is " << ULLONG_MAX << endl;//8�ֽ�
//	return 0;
//}


//#include <iostream>
//#include<climits>
//using namespace std;
//int main()
//{
//	cout << "Max of short is " << SHRT_MAX << endl;
//	cout << "Min of short is " << SHRT_MIN << endl;
//	cout << "Max of int is " << INT_MAX << endl;
//	cout << "Min of int is " << INT_MIN << endl;
//	cout << "Max of long is " << LONG_MAX << endl;
//	cout << "Mix of long is " << LONG_MIN << endl;
//	cout << "Max of long long is " << LLONG_MAX << endl;
//	cout << "Min of long long is " << LLONG_MIN << endl;
//	cout << "Max of unsigned short is " << USHRT_MAX << endl;
//	cout << "Max of unsigned int is " << UINT_MAX << endl;
//	cout << "Max of unsigned long is " << ULONG_MAX << endl;
//	cout << "Max of unsigned long long is " << ULLONG_MAX << endl;
//	return 0;
//}



//#include <limits>                   //�������ֳ���
//using namespace std;
//#include<iostream>
//int main()
//{
//    int isample, osample, hsample;
//    unsigned long ulsample;
//    cin >> isample >> oct >> osample >> hex >> hsample;
//    cout << isample << ';' << oct << osample << ';'<< hex << hsample << endl;
//    isample = 123;
//    osample = 0173;
//    hsample = 0x7B;
//    ulsample = 4294967295UL;
//    cout << dec << isample << ';' << oct << isample
//        << ';' << hex << isample << endl;
//    cout << dec << osample << ';' << oct << osample
//        << ';' << hex << osample << endl;
//    cout << dec << hsample << ';' << oct << hsample << ';'
//        << hex << hsample << endl;
//    cout << dec << ulsample << ';' << oct << ulsample << ';'
//        << hex << ulsample << endl;
//    return 0;
//}


#include <iostream>					//�������㣬�����븡������㡢��Ŀ
using namespace std;
int main()
{
	int val1 = 24;
	int val2 = 5;
	double val3 = 24;
	double val4 = 5;
	cout << "int/int,24/5=" << val1 / val2 << endl;
	cout << "int/int,24%5=" << val1 % val2 << endl;
	val2 = -5;
	cout << "int/int,24%(-5)=" << val1 % val2 << endl;
	cout << "double/double,24/5=" << val3 / val4 << endl;
	val2 = 5;
	cout << "double/int,24/5=" << val3 / val2 << endl;
	cout << "int/double,24/5=" << val1 / val4 << endl;


	val1 = 5;
	cout<< "val1=" << val1 << endl;
	cout << val1++ << ",";
	cout << ++val1 << ",";
	cout << val1-- << ",";
	cout << --val1 << ",";
	val1 = 5;
	cout << "val1=" << val1 << endl;
	cout << val1++ << "," << ++val1 << "," << val1-- << "," << --val1 << endl;
	return 0;
}