#include <iostream>
using namespace std;
 
double division(int a, double b)
{
   if( b == 0 )
   {
      throw "Division by zer0 condition!";
   }
   return (a/b);
}
 
int main ()
{
   int  x = 50;
   int  y = 11;
   double z = 0;
 
   try {
     z = division(x, y);
     cout << z << endl;
   }catch (const char* msg) {
     cerr << msg << endl;
   }
 
   return 0;
}