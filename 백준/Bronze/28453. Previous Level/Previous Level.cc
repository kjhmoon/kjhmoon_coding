#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	int N;
	int ary[101];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> ary[i];
		if (ary[i] == 300) {
			ary[i] = 1;
		}
		else if (ary[i] >= 275 && ary[i] < 300) {
			ary[i] = 2;
		}
		else if (ary[i] >= 250 && ary[i] < 275) {
			ary[i] = 3;
		}
		else if (ary[i] < 250){
			ary[i] = 4;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << ary[i] << ' ';
	}
	return 0;
}
