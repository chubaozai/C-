#include<iostream>
using namespace std;
int main()
{
	int temp;
	while(true)
	{
		cout << "请输入数字" << endl;
		cin >> temp;
		if(temp == 100)
		{
			cout << "== 100了" <<endl;
			break;
		}	
		else if(temp < 100)
		{
			cout << "< 100" <<endl;		
		}
		else 
		{
			cout << "> 100" <<endl;		
		}
	}
	
	
	return 0;
}