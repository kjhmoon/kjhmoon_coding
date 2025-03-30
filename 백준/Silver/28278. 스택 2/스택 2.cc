#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	stack <int> st; //st 스택 생성
	int n;				//명령어 개수
	int number;		//명령어 종류
	int x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> number;
		if (number == 1) {
			cin >> x;
			st.push(x); 
		}
		else if (number == 2) {
			if (st.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}
		else if (number == 3) {
			cout << st.size() << '\n';
		}
		else if (number == 4) {
			if (st.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (number == 5) {
			if (st.empty() == 0) {
				cout << st.top() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}
	return 0;
}