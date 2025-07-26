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
	int i; 
	int space[101] = {0};
	int input;
	int count = 0;
	cin >> i;
	for (int j = 0; j < i; j++) {
		cin >> input;
		if (space[input] == 1) {
			count++;
		}
		else {
			space[input] = 1;
		}
	}
	cout << count;
	return 0;
}