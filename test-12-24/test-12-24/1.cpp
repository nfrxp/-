#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Cal //计算器类 
{
public:
    char chr;

    //菜单
    void main_menu();

    //计算 
    float add(); //加减 
    float mult(); //乘除 
    float brackets(); //括号 
    void match(char); //匹配下一个字符 
    void error(); //错误提示 
};

int main()
{
    float sum; //运算的结果
    Cal c;
    c.main_menu();
    while (1)
    {
        cout << "请输入表达式 :";
        c.chr = getchar();
        if (c.chr == 'a' || c.chr == 'A')
        {
            system("CLS");
            c.main_menu();
            continue;

        }
        sum = c.add(); //计算
        if (c.chr == '\n')
            cout << ">>" << sum << endl;
        else c.error(); //出现了例外的字符
    }
    return 0;
}

void Cal::main_menu()
{
    cout << "**********************************************" << endl;
    cout << "简易手持四则运算计算器" << endl;
    cout << "* *" << endl;
    cout << "(a/A)全清除" << endl;
    cout << "* *" << endl;
    cout << "使用方法: 输入表达式,如 23*(14+2)/8" << endl;
    cout << "**********************************************" << endl;
}

float Cal::add()
{
    float temp = mult(); //先算乘除和括号 
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
    float temp = brackets(); //先算括号 
    while ((chr == '*') || (chr == '/'))
    {
        if (chr == '*')
        {
            match('*'); /* 乘法 */
            temp *= brackets();
        }
        else
        {
            match('/'); /* 除法 */
            div = brackets();
            if (div == 0) /* 需要判断除数是否为 0*/
            {
                cout << "除数不可为0" << endl;
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
    else if (isdigit(chr)) //数字
    {
        ungetc(chr, stdin); // 将读入的字符退还给输入流
        cin >> temp; //读出数字
        chr = getchar(); //读出当前的标志
    }
    return temp;
}

void Cal::match(char newChr) //对当前的标志进行匹配
{
    if (chr == newChr)
        chr = getchar(); //匹配成功，获取下一个标志
    else error(); // 匹配不成功，提示错误 
}

void Cal::error() // 报告出错信息的函数
{
    cout << "输入有错误" << endl;
    exit(1);
}
