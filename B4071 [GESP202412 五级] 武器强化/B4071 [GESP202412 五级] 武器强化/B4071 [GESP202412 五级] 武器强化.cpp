// B4071 [GESP202412 五级] 武器强化.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, minn, thingsValue[1005];
struct myNode {
	LL p, c, appear;
}things[1005];
static bool cmp(myNode a, myNode b) {
	if (a.appear == b.appear) {
		return a.c < b.c;
	}
	return a.appear > b.appear;
}
static bool judge() {
	for (auto x : thingsValue) {
		if (x > thingsValue[0]) {
			return true;
		}
	}
	return false;
}
void resetAppear(LL noww) {
	for (LL i = 0; i < m; i++) {
		if (things[i].p == noww) {
			things[i].appear++;
		}
	}
}
int main() {
	cin >> n >> m;
	for (LL i = 0; i < m; i++) {
		cin >> things[i].p >> things[i].c;
		thingsValue[things[i].p]++;
		things[i].appear++;
		resetAppear(things[i].p);
	}
	sort(things, things + m, cmp);
	for (LL i = 0; i < m && judge(); i++) {
		thingsValue[things[i].p]--;
		thingsValue[0]++;
		minn += things[i].c;
		//cout << things[i].p << ' ' << things[i].c << endl;
	}
	cout << minn;
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
