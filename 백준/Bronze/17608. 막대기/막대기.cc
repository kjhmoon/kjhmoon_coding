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
	stack<int> st;
	int n;
	int input;
	int max = -1;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;		
		st.push(input);
	}
	max = st.top();
	st.pop();
	while (!st.empty()) {
		if (max < st.top()) {
			max = st.top();
			count++;
			st.pop();
			continue;
		}
		if (max >= st.top()) {
			st.pop();
			continue;
		}
	}
	cout << count+1;

	return 0;
}