//#include<iostream>										//����ָ��
//using namespace std;
//int main()
//{
//	int x = 99;
//	int* p = &x;		//&��ȡַ�����
//	int** q = &p;		//����**
//	cout << *p << endl;	//*��ָ�������
//	cout << *q << endl;
//	cout << **q << endl;//����ָ��ֱ�ӷ���һ��ָ��ָ�������
//
//	return 0;
//}


//#include<iostream>										//ָ���볣��
//using namespace std;
//int main()
//{
//	int x = 99;
//	int y = 88;
//	const int* p = &x;		//ָ������ָ��
//	*p = 98;					//�����޸�ָ�������
//	x = 67;						//������ͨ������ֱ���޸�
//	p = &y;						//���޸�ָ�������ֵ
//
//	int* const q = &x;		//ָ�볣������ָ�룩
//	*q = 878;					//���޸�ָ��ָ�������
//	q = &y;						//�����޸�ָ�������ֵ
//
//	const int* const i = &x;
//	*i = 98;					//�����޸�ָ�������
//	i = &y;						//���޸�ָ�������ֵ
//	return 0;
//}


//#include<iostream>										//ָ�������
//using namespace std;
//int main()
//{
//	int x = 99;
//	int y = 98;
//	int* i = &x;
//	int* j = &y;
//	int n = 8;
//	j + n; j - n;				//ָ���������ļӼ����㡪>ָ��j��ǰ���ĵ�n�� ���� ��Ԫ
//	j - i;						//ָ����������->��ָ�����֮��ĵ�Ԫ��
//	return 0;
//}



//#include<iostream>										//��ά����
//using namespace std;
//int main()
//{
//	int a[4][3] = { {1,2,3},{5,32,99} };	//�����ʼ��
//
//	cout << a[4][3];	//������Ч��Χ��Ȼ���Է���
//	return 0;
//}