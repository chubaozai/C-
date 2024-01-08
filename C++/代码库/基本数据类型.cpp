#include <iostream>
using namespace std;
int main()
{ 
	int bf = 1;
	char fb = 'a'; 
	string sb = "一串葡萄";
	double db = 12.5;
	float ob = 12.6;
	bool bb = 0.01;
	
	cout << bf << endl;
	cout << fb << endl; 
	cout << sb << endl << db << endl << ob << endl << bb << endl;
	return 0;

    //字符型要用单引号括起来，字符串类型要用双引号括起来
    //double的精度比float的精度要高 故常用double记录小数
    //bool只能有两种返回类型 true和false 其中true = 1 false = 0 而在计算机运算中，非零都被理解成true


}