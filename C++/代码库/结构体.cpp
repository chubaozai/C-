#include <bits/stdc++.h> 
using namespace std;
struct Student //������һ����Ϊstudent�Ľṹ�壬���ڱ�ʾѧ������Ϣ��������������źͳɼ�
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
    	cin >> setNameValue;//��Ӧ��д�� ����ʾ��Ч���ͺ� 
    	name = setNameValue;
    }
} s;
 
int main()
{

	struct Student s2;
	
    cout << "������Ϣ:\n";
    cout << "����: ";
    cin >> s2.name;
 
    cout << "���: ";
    cin >> s2.roll;
 
    cout << "�ɼ�: ";
    cin >> s2.marks;
 

    cout << "��ʾ��Ϣ:\n" << "���֣�"; 
    cout << s2.name << endl;
    cout << "���: " << s2.roll << endl;
    cout << "�ɼ�:" << s2.marks << endl;
    
    cout << "-------------------------" << endl;
    
    
    cout << "�������������ְɣ�" << endl;
    s2.setName(); 
    cout << "�������õ�����Ϊ��" << endl;
 	cout << s2.getName() << endl;
    return 0;
}






