#include<bits/stdc++.h>
using namespace std;

int stoi(string &s)
{
	int temp;
	stringstream ss;
	ss << s;
	ss >> temp;
	return temp;
}
void i2s(int i,string &s)
{
	stringstream ss;
	ss<<i;
	ss>>s;
}

float stof(string &s)
{
	float temp;
	stringstream ss;
	ss << s;
	ss >> temp;
	return temp;
}

int main() 
{
    string strNumber = "12345"; // 要转换的字符串

    // 字符串转整数
    int intValue = stoi(strNumber);
    cout << "整数值: " << intValue << endl;

    string strFloat = "3.14"; // 要转换的字符串

    // 字符串转浮点数
    float floatValue = stof(strFloat);
    cout << "浮点数值: " << floatValue << endl;
    return 0;
}
