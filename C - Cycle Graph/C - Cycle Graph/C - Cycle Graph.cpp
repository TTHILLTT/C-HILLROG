// C - Cycle Graph.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
bool vis[200005];
LL n, m, dep[200005];
vector<vector<LL>> gr(200005);
LL dfs(LL u) {
	LL cnt = 0;
	stack<LL> s;
	s.push(u);
	vis[u] = true;
	while (!s.empty()) {
		LL cur = s.top();
		s.pop();
		cnt++;
		for (auto x: gr[cur]) {
			if (!vis[x]) {
				vis[x] = true;
				s.push(x);
			}
		}
	}
	return cnt;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	if (n != m) {
		cout << "No";
		return 0;
	}
	for (LL i = 1; i <= n; i++) {
		LL u, v;
		cin >> u >> v;
		gr[u].push_back(v);
		gr[v].push_back(u);
		dep[u]++;
		dep[v]++;
	}
	for (int i = 1; i <= n; i++) {
		if (dep[i] != 2) {
			cout << "No";
			return 0;
		}
	}
	LL ans = dfs(1);
	if (ans != n) {
		cout << "No";
	}
	else {
		cout << "Yes";
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
