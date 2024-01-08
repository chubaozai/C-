#include<bits/stdc++.h>
using namespace std;

int main()
{
	string userName,passWord;
	while(1)
	{
		cout << "请输入用户名" << endl;
		cin >> userName;
		cout << "请输入用户密码" << endl;
		cin >> passWord;
		
		if(userName == "wsl")
		{
			if(passWord == "123")
			{
				cout << "亲爱的小朋友，欢迎你！" << endl;
				break; 
			}
			else
			{
				cout << "wsl 密码输错啦！" << endl;
			}
		} 
		else
		{
			cout << "对不起 用户不存在" << endl;
		} 
		
	} 
    return 0;
}

