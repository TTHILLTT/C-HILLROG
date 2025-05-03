// 1306 【基础】十六进制转二进制.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
string n, res;
int main() {
	cin >> n;
	if (n == "0") {
		cout << "0";
		return 0;
	}
	LL len = n.length();
	for (int i = 0; i < len; i++) {
		char s = n[i];
		if (s == '0') res += "0000";
		else if (s == '1') res += "0001";
		else if (s == '2') res += "0010";
		else if (s == '3') res += "0011";
		else if (s == '4') res += "0100";
		else if (s == '5') res += "0101";
		else if (s == '6') res += "0110";
		else if (s == '7') res += "0111";
		else if (s == '8') res += "1000";
		else if (s == '9') res += "1001";
		else if (s == 'A') res += "1010";
		else if (s == 'B') res += "1011";
		else if (s == 'C') res += "1100";
		else if (s == 'D') res += "1101";
		else if (s == 'E') res += "1110";
		else if (s == 'F') res += "1111";
	}
	LL i = 0;
	while (res[i] == '0') {
		i++;
	}
	len = res.length();
	for (; i < len; i++) {
		cout << res[i];
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
