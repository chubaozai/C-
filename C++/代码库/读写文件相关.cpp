#include<bits/stdc++.h>
using namespace std;

int main() {
    ofstream outputFile;
    outputFile.open("output.txt"); // 打开输出文件

    outputFile << "Hello World!\n"; // 将字符串写入文件
    outputFile.close(); // 关闭输出文件

    ifstream inputFile;
    inputFile.open("input.txt"); // 打开输入文件

    if (inputFile.is_open()) { // 如果文件成功打开
        string line;
        while (getline(inputFile, line)) { // 逐行读取文件内容
            cout << line << '\n'; // 输出每行内容
        }
        inputFile.close(); // 关闭输入文件
    } else {
        cout << "Error opening file\n";
    }

    return 0;
}
