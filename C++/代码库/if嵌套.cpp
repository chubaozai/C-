#include<bits/stdc++.h>
using namespace std;

int main()
{
	string userName,passWord;
	while(1)
	{
		cout << "�������û���" << endl;
		cin >> userName;
		cout << "�������û�����" << endl;
		cin >> passWord;
		
		if(userName == "wsl")
		{
			if(passWord == "123")
			{
				cout << "�װ���С���ѣ���ӭ�㣡" << endl;
				break; 
			}
			else
			{
				cout << "wsl �����������" << endl;
			}
		} 
		else
		{
			cout << "�Բ��� �û�������" << endl;
		} 
		
	} 
    return 0;
}

