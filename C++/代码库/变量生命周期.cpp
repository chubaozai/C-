#include <iostream>
using namespace std;

int globalVar = 20;


void myFunction()
{
    int x = 10; // 局部变量x，在函数内创建
    cout << "函数局部变量在此! " << x << endl;
    cout << "函数访问全局变量在此! " << ++globalVar << endl;
} // 函数结束，局部变量x销毁

int main()
{
    myFunction(); // 调用函数
    cout << "主函数访问全局变量在此! " << ++globalVar << endl;
    //cout << x << endl;
    // 在此处无法访问局部变量x
    return 0;
}
