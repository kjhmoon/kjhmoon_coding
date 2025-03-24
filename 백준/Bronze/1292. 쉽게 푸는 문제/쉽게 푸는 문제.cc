#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {				
	int ary[1001];
	fill(ary, ary + 1001, -1);
	int A, B;
	int sum = 0;
	cin >> A >> B;
	int count = 1;
	int count_ary = 1;
	while (1) {
		for (int i = 1; i <= count; i++) {
			ary[count_ary] = count;
			count_ary++;
		}
		if (ary[B] != -1) {
			for (int j = A; j <= B; j++) {
				sum += ary[j];
			}
			cout << sum;
			exit(0);
		}
		count++;
	}
	
	return 0;
}