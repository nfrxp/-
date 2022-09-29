//#include<iostream>							//从1到10累加（while循环）
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



//#include <iostream>						//输入一个数，将各位数字翻转后输出
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
//		n /= 10;  //相当于n=n/10
//	} while (n != 0);
//	cout << endl;
//	return 0;
//}



//#include<iostream>							//如果是浮点数呢？
//using namespace std;
//int main()
//{
//	int a, b, c(0);		//a为初始值，b为余数，c为翻转后的数字
//	cout << "请输入一个数" << endl;
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
//	int a, b, c;		//a为初始值，b为余数，c为除数/为输出值(错误)
//	cout << "请输入一个数" << endl;
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

//#include <iostream>							//依次输入整数，统计正、负个数
//using namespace std;							//交互体验更好
//
//int main() {
//	int n,i = 0, j = 0;		//n为输入值，i为正整数个数，j为负整数个数
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


//#include <iostream>								//交互体验不好,需要输入0停止才有统计数据	
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
