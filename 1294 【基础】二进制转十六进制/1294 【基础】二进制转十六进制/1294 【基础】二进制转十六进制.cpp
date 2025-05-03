// 1294 【基础】二进制转十六进制.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
string n, res;
int main() {
	cin >> n;
	reverse(n.begin(), n.end());
	LL len = n.length();
	for (LL i = 0; i < len % 4; i++) {
		n += "0";
	}
	len = n.length();
	for (int i = 0; i < len; i += 4) {
		string s = n.substr(i, 4);
		reverse(s.begin(), s.end());
		if (s == "0000") res += "0";
		else if (s == "0001") res += "1";
		else if (s == "0010") res += "2";
		else if (s == "0011") res += "3";
		else if (s == "0100") res += "4";
		else if (s == "0101") res += "5";
		else if (s == "0110") res += "6";
		else if (s == "0111") res += "7";
		else if (s == "1000") res += "8";
		else if (s == "1001") res += "9";
		else if (s == "1010") res += "A";
		else if (s == "1011") res += "B";
		else if (s == "1100") res += "C";
		else if (s == "1101") res += "D";
		else if (s == "1110") res += "E";
		else if (s == "1111") res += "F";
	}
	reverse(res.begin(), res.end());
	cout << res;
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
