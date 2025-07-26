#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
vector<LL>testingVector;
vector<LL>testingVectorTwo;
int main() {
	{
		testingVector.push_back(1145);
		testingVector.push_back(14);
		testingVector.push_back(1919);
		testingVector.push_back(14);
		testingVector.push_back(1919);
		testingVector.push_back(810);
		testingVector.push_back(810);
		testingVector.push_back(810);
	}
	{
		testingVector.pop_back();
		testingVector.pop_back();
		testingVector.erase(testingVector.begin() + 3, testingVector.begin() + 5);
		//testingVector.erase(remove(testingVector.begin(), testingVector.end(), 1234));
	}
	{
		for(auto i : testingVector) {
			cout << i;
		}
		cout << endl;
		for (LL i = 0; i < 4; i++) {
			cout << testingVector[i];
		}
	}
	cout << endl;
	{
		testingVectorTwo.push_back(1145);
		testingVectorTwo.push_back(14);
		testingVectorTwo.push_back(19);
		testingVectorTwo.push_back(19);
		testingVectorTwo.push_back(810);
	}
	{
		testingVectorTwo.erase(remove(testingVectorTwo.begin(), testingVectorTwo.end(), 19), testingVectorTwo.end());
	}
	{
		for (auto i : testingVectorTwo) {
			cout << i;
		}
		cout << endl;
		for (LL i = 0; i < 5; i++) {
			cout << testingVectorTwo[i];
		}
	}
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/