////5_1.cpp
//#include <iostream>
//using namespace std;
//
//int i;				//ȫ�ֱ������ļ�������
//int main() {
//    i = 5;			//Ϊȫ�ֱ���i��ֵ
//    {				//�ӿ�1
//        int i;		//�ֲ��������ֲ�������
//        i = 7;
//        cout << "i = " << i << endl;//���7
//    }
//    cout << "i = " << i << endl;//���5
//    return 0;
//}


//#include<iostream>
//using namespace std;
//int i = 1; // i Ϊȫ�ֱ��������о�̬�����ڡ�
//void other() {
//    static int a = 2;
//    static int b;
//    // a,bΪ��̬�ֲ�����������ȫ���������ֲ��ɼ���
//    //ֻ��һ�ν��뺯��ʱ����ʼ����
//    int c = 10; // CΪ�ֲ����������ж�̬�����ڣ�
//    //ÿ�ν��뺯��ʱ����ʼ����
//    a += 2; i += 32; c += 5;
//    cout << "---OTHER---\n";
//    cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
//    b = a;
//}
//
//int main() {
//    static int a;//��̬�ֲ���������ȫ���������ֲ��ɼ���
//    int b = -10; // b, cΪ�ֲ����������ж�̬�����ڡ�
//    int c = 0;
//    cout << "---MAIN---\n";
//    cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
//    c += 8; other();
//    cout << "---MAIN---\n";
//    cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
//    i += 10; other();
//    return 0;
//}



//#include<iostream>	//static��̬������ָ��ε���ֻ��ʼ��һ�Σ���������ȫ�ֱ���һ�������������
//using namespace std;
//
//void test()
//{
//	static int a = 0;
//}
//int main()
//{
//	test();
//	cout << a;
//	return 0;
//}


//5_4.cpp
#include <iostream>
using namespace std;

class Point {	//Point�ඨ��
public:	//�ⲿ�ӿ�
	Point(int x = 0, int y = 0) : x(x), y(y) { //���캯��
		//�ڹ��캯���ж�count�ۼӣ����ж���ͬά��ͬһ��count
		count++;
	}
	Point(Point& p) {	//���ƹ��캯��
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() { count--; }
	int getX() { return x; }
	int getY() { return y; }
	void showCount() {		//�����̬���ݳ�Ա
		cout << "  Object count = " << count << endl;
	}
private:	//˽�����ݳ�Ա
	int x, y;
	static int count;	//��̬���ݳ�Ա���������ڼ�¼��ĸ���	!!!�����������ͬһ��count
};
int Point::count = 0;//��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�
int main() {	//������
	Point a(4, 5);	//�������a���乹�캯����ʹcount��1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	a.showCount();	//����������

	Point b(a);	//�������b���乹�캯����ʹcount �� ��1		
	cout << "Point B: " << b.getX() << ", " << b.getY();
	b.showCount();	//����������
	return 0;
}

