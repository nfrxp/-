////Êı¾İÀàĞÍ¸Ä±ä
//
//#include<iostream>								//¼ÓºÅÔËËã·ûÖØÔØ
//using namespace std;
//
//class Person
//{
//public:
//	//1.³ÉÔ±º¯ÊıÖØÔØ+ºÅ
//	//Person operator+(Person& p)
//	//{
//	//	Person temp;
//	//	temp.A = A + p.A;
//	//	temp.B = B + p.B;
//	//	return temp;
//	//}
//
//	int A;
//	int B;
//};
//
////2.È«¾Öº¯ÊıÖØÔØ+ºÅ
//Person operator+(Person& a, Person& b)
//{
//	Person temp;
//	temp.A = a.A + b.A;
//	temp.B = a.B + b.B;
//	return temp;
//}
//
//Person operator+(Person& a, int b)
//{
//	Person temp;
//	temp.A = a.A + b;
//	temp.B = a.B + b;
//	return temp;
//}
//
//void test01()
//{
//	Person a;
//	a.A = 10;
//	a.B = 90;
//	Person b;
//	b.A = 99;
//	b.B = 1;
//
//	//Person c = a + b;
//	////Person c=a.operator+(b)	//³ÉÔ±º¯ÊıÖØÔØ±¾ÖÊµ÷ÓÃ
//	//cout << c.A << " " << c.B << endl;
//
//	Person c = a + b;
//	//Person c=operator+(a,b)	//È«¾Öº¯ÊıÖØÔØ±¾ÖÊµ÷ÓÃ
//	cout << c.A << " " << c.B << endl;
//
//	 c = a + b;
//	cout << c.A << " " << c.B << endl;
//
//
//	//ÔËËã·ûÖØÔØÒ²¿ÉÒÔº¯ÊıÖØÔØ
//	Person i = a + 10;
//	cout << "ÔËËã·ûÖØÔØµÄº¯ÊıÖØÔØ£º" << i.A << " " << i.B << endl;
//}
//int main()
//{
//	test01();
//
//	return 0;
//}
<<<<<<< HEAD:test-10-23ç±»å‹å…ƒ å‡½æ•°é‡è½½/test-10-23ç±»å‹å…ƒ å‡½æ•°é‡è½½/è¿ç®—ç¬¦é‡è½½.cpp



	//#include<iostream>										//×óÒÆÔËËã·ûÖØÔØ(cout Êä³ö)
	//using namespace std;
	//
	//class Person
	//{
	//	friend ostream& operator<<(ostream& out, Person& p);
	//	friend void test01();
	//public:
	//	////³ÉÔ±º¯ÊıÊµÏÖÖØÔØ	ĞĞ²»Í¨£¬ÎŞ·¨ÊµÏÖcoutÔÚ×ó²à
	//	//void operator<<(cout)
	//	//{
	//	//}
	//private:
	//	int A;
	//	int B;
	//};
	//
	////È«¾Öº¯Êı
	////ostream& operator<<(ostream &cout, Person& p)
	////{
	////	cout << "p.A=" << p.A << " p.B=" << p.B << endl;
	////	return cout;
	////}
	////Í¬ÏÂ
	//ostream& operator<<(ostream& out, Person& p)
	//{
	//	out << "p.A=" << p.A << " p.B=" << p.B << endl;
	//	return out;
	//}
	//void test01()
	//{
	//	Person a;
	//	a.A = 10;
	//	a.B = 99;
	//
	//	//cout << "a.A=" << a.A << " a.B=" << a.B << endl;
	//	//cout << a;
	//	cout << a << endl;//Á´Ê½±à³Ì
	//}
	//int main()
	//{
	//	test01();
	//	return 0;
	//}

	//#include<iostream>											//ÖØÔØ++ÔËËã·û
	//using namespace std;
	//
	//class Person
	//{
	//	//friend ostream& operator<<(ostream& cout, Person& p);
	//	friend ostream& operator<<(ostream& cout, Person p);
	//public:
	//	//1.Ç°ÖÃ++ÖØÔØ
	//	Person& operator++()
	//	{
	//		//1.ÏÈ++
	//		age++;
	//		//2.ÔÚ·µ»Ø
	//		return *this;
	//	}
	//
	//	//2,ºóÖÃ++ÖØÔØ
	//	Person operator++(int)			//int Õ¼Î»·û
	//	{
	//		//1.ÏÈ¼ÇÂ¼Ô­Öµ£¬ÔÙ¼Ó¼Ó
	//		Person temp = *this;
	//		age++;
	//		//2.·µ»ØÔ­Öµ
	//		return temp;
	//	}
	//	Person()
	//	{
	//		age =0;
	//	}
	//private:
	//	int age;
	//
	//};
	//
	////ÖØÔØ<<ÔËËã·û
	////ostream& operator<<(ostream& cout, Person& p)
	////{
	////	cout << p.age << endl;
	////	return cout;
	////}
	//
	//ostream& operator<<(ostream& cout, Person p)
	//{
	//	cout << p.age << endl;
	//	return cout;
	//}
	//
	//void test01()
	//{
	//	Person a;
	//	cout << a << endl;
	//	//cout << ++a<<endl;
	//	cout << ++(++a) << endl;
	//}
	//
	//void test02()
	//{
	//	Person b;
	//	cout << b++ << endl;
	//	cout << b << endl;
	//}
	//int main()
	//{
	//	//test01();
	//	test02();
	//	return 0;
	//}

=======
>>>>>>> 72044e2050ed641845a807c3e66ec54a61823515:test-10-23 ç±» å‹å…ƒ è¿ç®—ç¬¦é‡è½½/test-10-23 ç±» å‹å…ƒ è¿ç®—ç¬¦é‡è½½/è¿ç®—ç¬¦é‡è½½.cpp
