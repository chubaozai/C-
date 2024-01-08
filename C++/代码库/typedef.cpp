#include <bits/stdc++.h> 
using namespace std;

typedef struct Student {
    string name;
    int roll;
    float marks;
} student;  // 使用typedef定义新的类型名称为student
 
int main() {
	
    student s2;  // 使用新定义的类型名称student
 
    cout << "输入信息:\n";
    cout << "名字: ";
    cin >> s2.name;
 
    cout << "编号: ";
    cin >> s2.roll;
 
    cout << "成绩: ";
    cin >> s2.marks;


    cout << "显示信息:\n" << "名字："; 
    cout << s2.name << endl;
    cout << "编号: " << s2.roll << endl;
    cout << "成绩:" << s2.marks << endl;
 
    return 0;
}

