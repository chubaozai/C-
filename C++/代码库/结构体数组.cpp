#include <bits/stdc++.h> 
using namespace std;
struct Student //������һ����Ϊstudent�Ľṹ�壬���ڱ�ʾѧ������Ϣ��������������źͳɼ�
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
	s2.name = "ͬѧ��"; 
	s2.math = 15;
	s2.english = 50; 
	
    cout << "������Ϣ:\n";
    cout << "����: ";
    cin >> s.name;
 
    cout << "��ѧ�ɼ�: ";
    cin >> s.math;
 
    cout << "Ӣ��ɼ�: ";
    cin >> s.english;
 

    cout << "��ʾ��Ϣ:\n" << "���֣�"; 
    cout << s.name << endl;
    cout << "��ѧ�ɼ�: " << s.math << endl;
    cout << "Ӣ��ɼ�:" << s.english << endl;
    
    cout << "-------------------------" << endl;
    
    
    cout << "���������бȽϣ�" << endl;
    cout << (s < s2) << endl;
    return 0;
}






