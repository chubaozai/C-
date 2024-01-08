#include <iostream>
using namespace std;
 
int main ()
{
	int num;
	while(true)
	{
		cout << "请输入一个数字" << endl;
		cin >> num;
		if(num > 100)
		{
			if(num > 200)
			{
				if(num > 300)
			    {
					cout << "不仅大于200 还大于300了！" << endl;
					continue;
					//break;
				}
				cout << "不仅大于100 还大于200了！" << endl;
				continue;
				//break;
			}
			
			cout << "确实大于100了" << endl;
			continue;
			//break;
		} 
		else
		{
			cout << "确实小于100了" << endl;
		}
		cout << "你输入了： " << num << endl << endl;
	} 
 
   return 0;
}
