#include <bits/stdc++.h> 
using namespace std;
struct Student //������һ����Ϊstudent�Ľṹ�壬���ڱ�ʾѧ������Ϣ��������������źͳɼ�
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
		cout << "����������" << endl;
		cin >> s[i].name;
		cout << "��������ѧ�ɼ�" << endl;
		cin >> s[i].math;
		cout << "������Ӣ��ɼ�" << endl;
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
	cout << "һ���ܳɼ� " << ans << " �����ܳɼ�" << endl; 
    return 0;
}






