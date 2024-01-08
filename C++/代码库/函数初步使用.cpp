#include<bits/stdc++.h>
using namespace std;
void eat(string food, string food2)
{
	cout << "i am eating " << food << endl;
	cout << "i am eating " << food2 << endl;
}
void drink()
{
	cout << "i am drinking" << endl;
}
void poop()
{
	cout << "i am pooping" << endl;
}
void peep()
{
	cout << "i am peeping" << endl;
}
string fly(long long speed)
{
	cout << "当前飞行速度为：" << speed << endl;
	
	if(speed > 100)
	{
		return "超越音速！！！";
	} 
	else if((speed > 10)&&(speed < 100))
	{
		return "中规中矩";
	} 
	else
	{
		return "too slow...";
	} 
}

int main()
{
	string food_1,food_2;
	
	cout << "请输入第一个食物" << endl;
	cin >> food_1;
	
	cout << "请输入第二个食物" << endl;
	cin >> food_2;
	
	eat(food_1,food_2);
	return 0;
}





