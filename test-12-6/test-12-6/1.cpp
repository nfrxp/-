#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
typedef char BYTEPORT;

void Delay1s(int n);
void Binary(BYTEPORT a);

int main(void)
{
    int T1, T2;
    //6bit���δ��� ������ơ������̵ơ������Ƶơ��ϱ���ơ��ϱ��̵ơ��ϱ��Ƶ�
    //��ʼʱ��������Ϊ��ƣ�����Ϊ�̵�
    BYTEPORT a = 34;//00100010
    cout<<"�����붫������ʱ��:\n";
    cin >> T1;
    cout<<"�����붫�����̵�ʱ��:\n";
    cin >> T2;


    cout << "��ͨ�����\n";
    while (1)
    {
        a = 34;         //00100010
        Binary(a); //�������,�ϱ��̵�
        Delay1s(T1-5);  //����T1��

        a = a ^ 3;      //00100001 
        Binary(a); //������ƣ��ϱ��Ƶ�
        Delay1s(5);     //����5��

        a = a ^ 53;     //00010100 
        Binary(a); //�����̵ƣ��ϱ����
        Delay1s(T2);    //����T2��

        a = a ^ 24;     //00001100
        Binary(a); //�����Ƶƣ��ϱ����
        Delay1s(5);     //����5��

    }
    return 0;
}

void Delay1s(int n)
{
    clock_t start;
    int i;

    for (i = 0; i < n; i++)
    {
        start = clock();
        while ((clock() - start) < CLK_TCK)
        {
            ;
        }
    }
}

void Binary(BYTEPORT a)
{
    int t = a, num[8], i;
    int temp;
    for (i = 0; i < 8; i++)
    {
        num[i] = t % 2;
        t = t / 2;
    }
    for (i = 0; i < 4; i++)
    {
        temp = num[i];
        num[i] = num[7 - i];
        num[7 - i] = temp;
    }
    for (i = 2; i < 8; i++)
    {
        cout << num[i];
    }
    switch (a) 
    {
    case 34:
        cout << "�������ƣ��ϱ����̵�\n";
        break;
    case 33:
        cout << "�������ƣ��ϱ���Ƶ�\n";
        break;
    case 20:
        cout << "�������̵ƣ��ϱ�����\n";
        break;
    case 12:
        cout << "������Ƶƣ��ϱ�����\n";
        break;
    }
    
}
