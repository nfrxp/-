#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//
//using namespace std;
//int main() {
//	int a, b, d = 25;
//	a = d / 8 % 9;
//	b = a && (-1);
//	cout << a << ',' << b;
//
//	return 0;
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


//#include<iostream>
//using namespace std;
//
//class Point {
//public:
//	Point(int x = 0, int y = 0) :x(x),y(y) {
//		//�ڹ��캯���ж�count�ۼӣ����ж���ͬά��ͬһ��count
//		count++;
//	}
//	Point(Point& p) {
//		//���ƹ��캯��
//		x = p.x;
//		y = p.y;
//		count++;//���˴�������count���ڸ��ƹ���ʱ��count���ʼ��Ϊ0��
//	}
//	~Point() {
//		count--;
//	}
//	int getx() { return x; }
//	int gety() { return y; }
//	void showCount() {
//		//�����̬���ݳ�Ա
//		cout << " Object Count=" << count << endl;
//	}
//private:
//	int x;
//	int y;
//	static int count;//������̬���ݳ�Ա
//};
//int Point::count = 0;//��̬���ݳ�Ա����ͳ�ʼ����ʹ������Point����
//
//int main() {
//	Point a(3, 4);//�������a�����캯��ʹcount+1
//	cout << "Point a:" << a.getx() << "," << a.gety();
//	a.showCount();//����������
//
//	Point b(a);//�������b�����ƹ��캯��ʹcount+1
//	cout << "Point b:" << b.getx() << "," << b.gety();
//	b.showCount();//����������
//
//	Point c(1, 2);//�������c,���캯��ʹcount+1
//	cout << "Point c:" << c.getx() << "," << c.gety();
//	c.showCount();//����������
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Point {
//public:
//	Point(int x, int y) :x(x), y(y) {
//		//�ڹ��캯���ж�count�ۼӣ����ж���ͬά��ͬһ��count
//		count++;
//	}
//	Point(Point& p) {
//		//���ƹ��캯��
//		x = p.x;
//		y = p.y;
//		count++;
//	}
//	~Point() { count--; }
//	int getx() { return x; }
//	int gety() { return y; }
//	static void showCount() {
//		//��̬��Ա����
//		cout << " Object count:" << count << endl;
//	}
//private:
//	int x, y;
//	static int count;
//};
//int Point::count = 0;
//int main() {
//	Point a(3, 4);//�������a�����캯��ʹcount++
//	cout << "Point a:" << a.getx() << "," << a.gety();
//	Point::showCount();//���þ�̬��Ա����������������
//
//	Point b(a);//�������b�����ƹ��캯��ʹcount++
//	cout << "Point b:" << b.getx() << "," << b.gety();
//	Point::showCount();//���þ�̬��Ա����������������
//
//	return 0;
//}

