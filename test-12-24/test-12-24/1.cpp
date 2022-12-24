#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Cal //�������� 
{
public:
    char chr;

    //�˵�
    void main_menu();

    //���� 
    float add(); //�Ӽ� 
    float mult(); //�˳� 
    float brackets(); //���� 
    void match(char); //ƥ����һ���ַ� 
    void error(); //������ʾ 
};

int main()
{
    float sum; //����Ľ��
    Cal c;
    c.main_menu();
    while (1)
    {
        cout << "��������ʽ :";
        c.chr = getchar();
        if (c.chr == 'a' || c.chr == 'A')
        {
            system("CLS");
            c.main_menu();
            continue;

        }
        sum = c.add(); //����
        if (c.chr == '\n')
            cout << ">>" << sum << endl;
        else c.error(); //������������ַ�
    }
    return 0;
}

void Cal::main_menu()
{
    cout << "**********************************************" << endl;
    cout << "�����ֳ��������������" << endl;
    cout << "* *" << endl;
    cout << "(a/A)ȫ���" << endl;
    cout << "* *" << endl;
    cout << "ʹ�÷���: ������ʽ,�� 23*(14+2)/8" << endl;
    cout << "**********************************************" << endl;
}

float Cal::add()
{
    float temp = mult(); //����˳������� 
    while ((chr == '+') || (chr == '-'))
        if (chr == '+')
        {
            match('+');
            temp += mult();
        }
        else
        {
            match('-');
            temp -= mult();
        }
    return temp;
}

float Cal::mult()
{
    float div;
    float temp = brackets(); //�������� 
    while ((chr == '*') || (chr == '/'))
    {
        if (chr == '*')
        {
            match('*'); /* �˷� */
            temp *= brackets();
        }
        else
        {
            match('/'); /* ���� */
            div = brackets();
            if (div == 0) /* ��Ҫ�жϳ����Ƿ�Ϊ 0*/
            {
                cout << "��������Ϊ0" << endl;
                exit(1);
            }
            temp /= div;
        }
    }
    return temp;
}

float Cal::brackets()
{
    float temp=0;
    if (chr == '(')
    {
        match('(');
        temp = add();
        match(')');
    }
    else if (isdigit(chr)) //����
    {
        ungetc(chr, stdin); // ��������ַ��˻���������
        cin >> temp; //��������
        chr = getchar(); //������ǰ�ı�־
    }
    return temp;
}

void Cal::match(char newChr) //�Ե�ǰ�ı�־����ƥ��
{
    if (chr == newChr)
        chr = getchar(); //ƥ��ɹ�����ȡ��һ����־
    else error(); // ƥ�䲻�ɹ�����ʾ���� 
}

void Cal::error() // ���������Ϣ�ĺ���
{
    cout << "�����д���" << endl;
    exit(1);
}
