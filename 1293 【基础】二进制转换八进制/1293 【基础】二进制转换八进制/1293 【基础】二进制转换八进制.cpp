// 1293 【基础】二进制转换八进制.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
string n, res;
int main() {
	cin >> n;
	reverse(n.begin(), n.end());
	LL len = n.length();
	for (LL i = 0; i < len % 3; i++) {
		n += "0";
	}
	len = n.length();
	for (int i = 0; i < len; i += 3) {
		string s = n.substr(i, 3);
		reverse(s.begin(), s.end());
		if (s == "000") res += "0";
		else if (s == "001") res += "1";
		else if (s == "010") res += "2";
		else if (s == "011") res += "3";
		else if (s == "100") res += "4";
		else if (s == "101") res += "5";
		else if (s == "110") res += "6";
		else if (s == "111") res += "7";
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
