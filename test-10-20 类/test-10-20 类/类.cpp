//#include<iostream>
//using namespace std;
//
//class Students
//{
//public:
//	//属性
//	int id;
//	string name;
//
//	//行为
//	void ShowStudent()
//	{
//		cout << "姓名： " << name << "  学号： " << id << endl;
//	}
//
//	void SetName(string name2)
//	{
//		name = name2;
//	}
//	void SetId(int id2)
//	{
//		id = id2;
//	}
//};
//
//int main()
//{
//	Students a;
//	//a.id = 2021217212;				//直接赋值
//	//a.name = "张三";
//	//a.ShowStudent();
//
//	a.SetName("张三");					//通过行为赋值
//	a.SetId(2021217212);
//	a.ShowStudent();
//
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//公共权限
//	string m_name;
//protected:
//	//保护权限
//	string m_car;
//private:
//	//私有权限
//	int m_password;
//};
//
//int main()
//{
//	Person a;
//	a.m_name = "张三";		//公共权限，类外可以访问
//	a.m_car;				//保护权限，类外无法访问
//	a.m_password;			//私有权限，类外无法访问
//	return 0;
//}


//#include<iostream>								//struct和class的区别
//using namespace std;
//
//struct A
//{
//	string name;
//};
//
//class B
//{
//	string name;
//};
//
//int main()
//{
//	A a;
//	a.name = "牛逼";						//struct默认访问权限为公共
//
//	B b;
//	b.name = "牛逼";						//class默认访问权限为私有
//
//	return 0;
//}


//#include<iostream>										//属性设置为私有，控制权限
//using namespace std;
//
//class Person
//{
//public:
//	void SetName(string name)
//	{
//		m_name = name;
//	}
//	string ShowName()
//	{
//		return m_name;
//	}
//
//	void SetYear(int year)
//	{
//		if (year > 0 && year <= 150)
//			m_year = year;
//		else
//			cout << "年龄非法输入！" << endl;
//	}
//	int ShowYear()
//	{
//		
//		return m_year;
//	}
//
//	string ShowLover()
//	{
//		m_lover = "仓井";
//		return m_lover;
//	}
//private:
//	//姓名		可读 可写
//	string m_name;
//
//	//年龄		可读 可写
//	int m_year;
//
//	//情人		可读
//	string m_lover;
//
//};
//int main()
//{
//	Person a;
//	a.SetName("张三");
//	cout << "姓名：" << a.ShowName() << endl;
//
//	a.SetYear(65);
//	cout << "年龄：" << a.ShowYear() << endl;
//
//	cout << "情人：" << a.ShowLover() << endl;
//	return 0;
//}



#include<iostream>									//点·和圆⚪的关系
using namespace std;

//点类
class Point
{
public:
	void SetX(int x)
	{
		m_x = x;
	}
	int GetX()
	{
		return m_y;
	}

	void SetY(int y)
	{
		m_y = y;
	}
	int GetY()
	{
		return m_y;
	}

private:
	int m_x;
	int m_y;
};


//圆类
class Circle
{
public:
	void SetR(int r)
	{
		m_r = r;
	}
	int GetR()
	{
		return m_r;
	}

	void SetCenter(Point center)
	{
		m_center = center;
	}
	Point GetCenter()
	{
		return m_center;
	}
private:
	int m_r;
	Point m_center;
};

//判断点和园的关系
void isInCircle(Circle &c,Point &p)
{
	//计算两点之间的距离
	int distance =
		(c.GetCenter().GetX() - p.GetX()) * (c.GetCenter().GetX() - p.GetX())
		+ (c.GetCenter().GetY() - p.GetY()) * (c.GetCenter().GetY() - p.GetY());

	//计算半径的平方
	int rDistance = c.GetR() * c.GetR();

	//判断关系
	if (distance == rDistance)
		cout << "点在圆上！\n";
	else if (distance > rDistance)
		cout << "点在圆外！\n";
	else
		cout << "点在圆内！\n";

}


int main()
{
	//创建圆
	Circle c;
	c.SetR(10);
	Point center;
	center.SetX(10);
	center.SetY(0);
	c.SetCenter(center);

	//创建点
	Point p;
	p.SetX(3);
	p.SetY(5);

	//判断关系
	isInCircle(c, p);
	return 0;
}