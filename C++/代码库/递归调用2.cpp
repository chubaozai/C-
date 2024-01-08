#include<bits/stdc++.h>
using namespace std;

void littleBrother(int num,char charactor)//µİ¹éÊä³ö26¸öÓ¢ÎÄ×Ö·ûÄ¸ 
{
	if(num == 27)
	{
		return;
	}
	cout << "×ÖÄ¸ÊÇ£º " << charactor << endl;
	littleBrother(num + 1,charactor + 1) ;
}

int main()
{
	littleBrother(1,'A');
	return 0;
}
