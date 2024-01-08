

/*
	20级楼梯 每次只能上一阶或两阶
	问：
	一共有多少种上法 
	
*/


#include<bits/stdc++.h> 
using namespace std;

long long calculate(int stairNum)
{
	if(stairNum <= 0)
	return 0;
	if(stairNum == 1)
	return 1;
	if(stairNum == 2)
	return 2;
	return (calculate(stairNum - 1) + calculate(stairNum - 2));
}

int main()
{
	int stairNum = 20;
	cout << calculate(stairNum);
	
	return 0;
}















