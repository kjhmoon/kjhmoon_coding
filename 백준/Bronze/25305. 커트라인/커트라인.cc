#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int N, k;
	int grade[1000];
	cin >> N >> k;
	for (int i = 0; i < N; i++) {
		cin >> grade[i];
	}
	sort(grade, grade + N, greater<int>());
	cout << grade[k-1];
	
	return 0;
}
