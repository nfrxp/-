#define _CRT_SECURE_NO_WARNINGS 1

typedef int elementType;
#include<iostream>
using namespace std;

//�ж���������Ƿ�Ϸ�
//bool legalOut(elementType InStack[], elementType OutStack[], int len)
//{
//	//InStack[]������ջ����
//	//OutStack[]�����������
//	//len�������г���
//	int i = 0, j = 0; //i Ϊ��ջ����ָ�룻 j Ϊ�������ָ��
//	elementType x;
//	Stack<int, 100> S; //��ʼ��˳��ջ
//	while (j < len)
//	{
//		S.getTop(x); 
//			if (InStack[i] < OutStack[j] && i < len) //��ջ����Ԫ��С���������Ԫ��
//			{
//				S.push(InStack[i]); //��ջ����ǰ��ջ���е�Ԫ�أ�
//				i++; //��ջ����ָ�����
//			}
//			else if (InStack[i] == OutStack[j]) //��ջ����Ԫ�ص����������Ԫ��
//			{
//				i++; //ָ��ͬʱ����
//				j++;
//			}
//			else if (x == OutStack[j]) //ջ��Ԫ�ص���������е�ǰԪ��
//			{
//				S.pop(); //��ջ
//				j++; //�������ָ�����
//			}
//			else
//				break;
//	}
//	if (S.empty() && i >= len) //ջ�գ�����ջ���д�����ϣ�������кϷ�
//		return true;
//	else
//		return false;
//}




//�ж������Ƿ�ƥ��
bool bracketMatch2(string str)
{
	Stack<char, 100> S; //��ʼ��һ���ַ���˳��ջ
	int len=str.length();//�ַ�������
	char x; //����ջ���ַ��������ţ�
	int i = 0;
	char all[6] = { '(','[','{','}',']',')' };

	for (i=0;i < len ;i++)
	{
		if (str[i] == all[0] || str[i] == all[1] || str[i] == all[2]) {
			S.push(str[i]);
		}
		else if (str[i] == all[5]) {
			if (S.empty()) {
				return false;
			}
			S.getTop(x);//ȡջ��
			if (x == all[0]) {
				S.pop();
				continue;
			}
			else {
				return false;
			}
		}
		else if (str[i] == all[4]) {
			if (S.emtpy()) {
				return false;
			}
			S.getTop(x);//ȡջ��
			if (x == all[1]) {
				S.pop();
				continue;
			}
			else {
				return false;
			}
		}
		else if (str[i] == all[3]) {
			if (S.empty()) {
				return false;
			}
			S.getTop(x);//ȡջ��
			if (x == all[2]) {
				S.pop();
				continue;
			}
			else {
				return false;
			}
		}
		else {
			continue;
		}
	}
	//���ʽ��ɨ���꣬�ų�����Բ���ȷ�������ű������Ŷ�����
	if (S.empty()){//�ų������ű������Ŷ�����
		return true;
	}
	else
		return false;
}