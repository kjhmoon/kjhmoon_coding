#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

int main() {
	int n; //단어개수
	cin >> n;
	vector<string> v;
	string input;
	for (int i = 0; i < n; i++) {	//여러 단어 입력받기
		cin >> input;
		v.push_back(input);
	}
	stable_sort(v.begin(), v.end(), [](const string& a, const string& b) { //정렬
		if (a.length() != b.length()) {
			return a.length() < b.length();
		}
		return a < b;
	});
	v.erase(unique(v.begin(), v.end()), v.end()); //중복제거
	for (const auto& w : v) {	//여러단어 출력받기 
		cout << w << '\n';
	}
	return 0;
}