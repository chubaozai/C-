#include <bits/stdc++.h> 
using namespace std;

typedef struct Student {
    string name;
    int roll;
    float marks;
} student;  // ʹ��typedef�����µ���������Ϊstudent
 
int main() {
	
    student s2;  // ʹ���¶������������student
 
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
 
    return 0;
}

