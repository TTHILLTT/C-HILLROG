#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
string s;

int main() {
    cin >> s;
    vector<int> indices;
    LL len = s.length();
    for (LL i = 0; i < len; i++) {
        if (s[i] == '#') 
            indices.push_back(i + 1);
    }
    for (LL i = 0; i < indices.size(); i += 2) {
        cout << indices[i] << "," << indices[i + 1] << endl;
    }
    return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/