#include <iostream>
using namespace std;
 
int main()
{
   int a = 25;
   a = 26;//程序中允许重复赋值 但是第一次赋的值会被覆盖掉。 
   
   int b = 10;
   int c;
 
   c = a + b;
   cout << "a + b 的值是 " << c << endl ;
   c = a - b;
   cout << "a - b 的值是 " << c << endl ;
   c = a * b;
   cout << "a * b 的值是 " << c << endl ;
   float ts = float(a) / b;//转换精度 
   cout << "a / b 的值是 " << ts << endl ;
   c = a % b;
   cout << "a % b 的值是 " << c << endl ;
 
   int d = 10;   //  自增、自减
   //c = d++;//c = d; d = d + 1; 
   c = ++d;//d = d + 1; c = d;
   cout << "c 自加完毕的值是 " << c << endl ;
 
   d = 10;    // 重新赋值
   //c = d--;//c = d ; d = d - 1
   c = --d;//d = d - 1; c = d;
   cout << "c 自减完毕的值是 " << c << endl ;

   c += 12;//c = c + 12;


   return 0;
}
//char	1 个字节	-128 到 127 或者 0 到 255
//为什么？ 
//因为一个字节占8个bit 共存储 2^8 个数据 

//int	4 个字节	-2147483648 到 2147483647
//为什么？ 
//因为一个字节占8个bit 四个字节共战32个bit 共存储 2^8 * 2^8 * 2^8 * 2^8 个数据 




