//#include<iostream>									//矩形类，利用左下角和右上角坐标求面积
//using namespace std;
//
//class Rectangle
//{
//public:
//	void SetX1(float x)
//	{
//		X1 = x;
//	}
//	void SetY1(float y)
//	{
//		Y1 = y;
//	}
//	void SetX2(float x)
//	{
//		X2 = x;
//	}
//	void SetY2(float y)
//	{
//		Y2 = y;
//	}
//
//	float ShowS()
//	{
//		return (X1 - X2) * (Y1 - Y2);
//	}
//private:
//	float X1;		//右上角
//	float Y1;
//	float X2;		//左下角
//	float Y2;
//};
//int main()
//{
//	Rectangle a;
//	a.SetX1(9);
//	a.SetY1(9);
//	a.SetX2(3);
//	a.SetY2(3);
//	cout << "矩形面积为：" << a.ShowS() <<endl;
//	return 0;
//}



//#include<iostream>										//同上，矩形类，求面积
//using namespace std;
//
//class Rectangle
//{
//public:
//	Rectangle(float x1, float y1, float x2, float y2)
//	{
//		X1 = x1; 
//		Y1 = y1; 
//		X2 = x2; 
//		Y2 = y2;
//	}
//	~Rectangle() {}
//
//	//void SetX1(float x)
//	//{
//	//	X1 = x;
//	//}
//	//void SetY1(float y)
//	//{
//	//	Y1 = y;
//	//}
//	//void SetX2(float x)
//	//{
//	//	X2 = x;
//	//}
//	//void SetY2(float y)
//	//{
//	//	Y2 = y;
//	//}
//
//	float ShowS()
//	{
//		return (X1 - X2) * (Y1 - Y2);
//	}
//private:
//	float X1;
//	float Y1;
//	float X2;
//	float Y2;
//};
//int main()
//{
//	Rectangle a(9,9,3,3);
//	cout << "面积为：" <<a.ShowS()<< endl;
//	return 0;
//}


//#include<iostream>										//矩形类，利用长宽求面积
//using namespace std;
//
//class Rectangle
//{
//public:
//	//void SetLength(float x)
//	//{
//	//	length = x;
//	//}
//
//	//void SetWidth(float y)
//	//{
//	//	width = y;
//	//}
//
//	Rectangle(float x, float y)
//	{
//		length = x;
//		width = y;
//	}
//	~Rectangle(){}
//
//	float ShowS()
//	{
//		return length * width;
//	}
//private:
//	float length;
//	float width;
//};
//int main()
//{
//	//Rectangle a;
//	//a.SetLength(10);
//	//a.SetWidth(8);
//	//cout << "面积为：" << a.ShowS() << endl;
//
//	float length = 0;
//	float width = 0;
//	cout << "请输入长度:>";
//	cin >> length;
//	cout << "请输入宽度:>";
//	cin >> width;
//	Rectangle a(length,width);
//	cout << "矩形面积为：" << a.ShowS() << endl;
//	return 0;
//}

//#include<iostream>										//复数类Complex
//using namespace std;
//
//class Complex
//{
//public:
//	Complex(double x, double y)
//	{
//		X = x;
//		Y = y;
//	}
//	Complex(double x)
//	{
//		X = x;
//		Y = 0;
//	}
//	void add(Complex c2)
//	{
//		X += c2.X;
//		Y += c2.Y;
//	}
//	void show()
//	{
//		cout << X << "+" << Y << "i" << endl;
//	}
//private:
//	double X;
//	double Y;
//};
//int main()
//{
//	Complex c1(3, 5);
//	Complex c2 = 4.5;
//	c1.add(c2);
//	c1.show();
//	return 0;
//}


//#include<iostream>										//复数类Complex,定义在后
//using namespace std;
//class Complex
//{
//public:
//	Complex(double x, double y)
//	{		X = x;		Y = y;	}
//	Complex(double x)
//	{		X = x;		Y = 0;	}
//	void add(Complex c2);
//	void show();
//
//private:
//	double X;
//	double Y;
//};
//void Complex::add(Complex c2)
//{
//	X += c2.X;
//	Y += c2.Y;
//}
//void Complex::show()
//{
//	cout << X << "+" << Y << "i"<<endl;
//}
//int main()
//{
//	Complex c1(3, 5);
//	Complex c2(4.5);
//	c1.add(c2);
//	c1.show();
//	return 0;
//}

