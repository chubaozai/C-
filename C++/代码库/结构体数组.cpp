#include <bits/stdc++.h> 
using namespace std;
struct Student //定义了一个名为student的结构体，用于表示学生的信息，包括姓名、编号和成绩
{
    string name; 
    float math;	 
    int english;
    
    int sum() const
    {
    	return math + english;
    }
    
    bool operator < (const Student& x) const
    {
    	if(getSum() < x.getSum())
    	{
    		return true;
    	}
    	else
    	{
    		return false;
    	}
    }

};
 
int main()
{

	//struct Student s[100];
	struct Student s1,s2;
	s2.name = "同学乙"; 
	s2.math = 15;
	s2.english = 50; 
	
    cout << "输入信息:\n";
    cout << "名字: ";
    cin >> s.name;
 
    cout << "数学成绩: ";
    cin >> s.math;
 
    cout << "英语成绩: ";
    cin >> s.english;
 

    cout << "显示信息:\n" << "名字："; 
    cout << s.name << endl;
    cout << "数学成绩: " << s.math << endl;
    cout << "英语成绩:" << s.english << endl;
    
    cout << "-------------------------" << endl;
    
    
    cout << "接下来进行比较：" << endl;
    cout << (s < s2) << endl;
    return 0;
}






