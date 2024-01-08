#include <iostream>
#include <string>
using namespace std;

int n = 4;
int maxsize = 8;
int maxvalue;
string ans = "";
int w[] = {2,3,4,5};
int v[] = {3,4,5,8};
void generateBinaryStrings(int n, string s, int curvalue, int cursize, int shenvalue, int shengw)
{
    if (cursize > maxsize) {//超出背包容量 剪枝
        return;
    }
    if ((curvalue + shenvalue) < maxvalue){//不管怎么选 都无法达到以达成的最大价值 故剪枝
        return;
    }
    if (n == -1){//索引为0的最后一次递归也结束，这里剪枝退出递归
        return;
    }
    if (curvalue > maxvalue){//维护能装下的最大价值的判断
        maxvalue = curvalue;
        ans = s;//记录01字符串 0代表不选 1代表选
    }
    generateBinaryStrings(n-1, s + "0", curvalue,cursize,shenvalue,shengw);
    generateBinaryStrings(n-1, s + "1", curvalue + v[4-n], cursize + w[4-n],
        shenvalue - v[4-n], shengw - w[4-n]);
}
int main()
{
    //cin >> n;
    generateBinaryStrings(4, "", 0, 0, 20, 8);
    cout<<ans<<endl;
    cout<<maxvalue<<endl;
    return 0;
}