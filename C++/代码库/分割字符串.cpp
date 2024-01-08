#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello,world!,This,is,a,test."; // 要分割的字符串

    stringstream iss(str); // 构造字符串流
    vector<string> tokens; // 定义字符串容器

    // 将字符串按逗号分割
    for (string token; getline(iss, token, ','); ) {
        tokens.push_back(token);
    }

    // 输出分割后的字符串
    for (int i = 0; i < tokens.size(); i++) {
        cout << tokens[i] << endl;
    }

    return 0;
}
