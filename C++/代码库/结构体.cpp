#include <bits/stdc++.h> 
using namespace std;
struct Student //定义了一个名为student的结构体，用于表示学生的信息，包括姓名、编号和成绩
{
    string name; 
    int roll;
    float marks;
    
    string getName()
    {
    	return name;
    }
    string setName()
    {
    	string setNameValue;
    	cin >> setNameValue;//不应该写这 但演示下效果就好 
    	name = setNameValue;
    }
} s;
 
int main()
{

	struct Student s2;
	
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
    
    cout << "-------------------------" << endl;
    
    
    cout << "接下来设置名字吧：" << endl;
    s2.setName(); 
    cout << "重新设置的名字为：" << endl;
 	cout << s2.getName() << endl;
    return 0;
}






