//#include<iostream>							//��1��10�ۼӣ�whileѭ����
//using namespace std;
//int main()
//{
//	int a, sum;
//	a = 1;
//	sum = 0;
//	while (a <= 10)
//	{
//		sum += a;
//		a++;
//	}
//	cout << "sum="<<sum << endl;
//	return 0;
//
//}



//#include <iostream>						//����һ����������λ���ַ�ת�����
//using namespace std;
//int main() {
//	int n, right_digit, newnum = 0;
//	cout << "Enter the number: ";
//	cin >> n;
//
//	cout << "The number in reverse order is  ";
//	do {
//		right_digit = n % 10;
//		cout << right_digit;
//		n /= 10;  //�൱��n=n/10
//	} while (n != 0);
//	cout << endl;
//	return 0;
//}



//#include<iostream>							//����Ǹ������أ�
//using namespace std;
//int main()
//{
//	int a, b, c(0);		//aΪ��ʼֵ��bΪ������cΪ��ת�������
//	cout << "������һ����" << endl;
//	cin >> a ;
//	while (a!=0)
//	{
//		b = a % 10;
//		c = c * 10 + b;
//		a = a / 10;
//		
//	}cout << c ;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;		//aΪ��ʼֵ��bΪ������cΪ����/Ϊ���ֵ(����)
//	cout << "������һ����" << endl;
//	cin >> a;
//	c = 1;
//	while (c<=a)
//	{
//		b = a % c;
//		if (b == 0)
//		{
//			cout << c<<" ";
//			c++;
//		}
//
//	}
//	cout << a;
//	return 0;
//}

//#include <iostream>							//��������������ͳ������������
//using namespace std;							//�����������
//
//int main() {
//	int n,i = 0, j = 0;		//nΪ����ֵ��iΪ������������jΪ����������
//	cout << "Enter some integers please (enter 0 to quit): "<< endl;
//		cin >> n;
//	while (n != 0) 
//	{
//		if (n > 0) i += 1;
//	cout << "Count of positive integers: " << i << endl;
//		if (n < 0) j += 1;
//	cout << "Count of negative integers: " << j << endl;
//		cin >> n;
//	}
//
//
//	return 0;
//}


//#include <iostream>								//�������鲻��,��Ҫ����0ֹͣ����ͳ������	
//using namespace std;
//
//int main() {
//	int i = 0, j = 0, n;
//	cout << "Enter some integers please (enter 0 to quit): "<< endl;
//		cin >> n;
//	while (n != 0) {
//		if (n > 0) i += 1;
//		if (n < 0) j += 1;
//		cin >> n;
//	}
//	cout << "Count of positive integers: " << i << endl;
//	cout << "Count of negative integers: " << j << endl;
//	return 0;
//}
