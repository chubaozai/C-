#include <bits/stdc++.h> 
using namespace std;
struct Student //定义了一个名为student的结构体，用于表示学生的信息，包括姓名、编号和成绩
{
    string name; 
    int math;
    int english;
    
    int getSum() const
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

	struct Student s[100];
	char ans; 

	for(int i = 0; i < 2; i++)
	{
		cout << "请输入姓名" << endl;
		cin >> s[i].name;
		cout << "请输入数学成绩" << endl;
		cin >> s[i].math;
		cout << "请输入英语成绩" << endl;
		cin >> s[i].english;
		cout << endl << endl;
	}
	if(s[0] < s[1])
	{
		ans = '<';
	}
	else
	{
		ans = '>=';
	}
	cout << "一号总成绩 " << ans << " 二号总成绩" << endl; 
    return 0;
}






