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
	int people[9];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> people[i];
		sum += people[i];
	}
	for (int j = 0; j < 9; j++) {
		sum = sum - people[j];
		for (int k = j + 1; k < 9; k++) {
			sum = sum - people[k];
			if (sum == 100) {
				people[j] = -1;
				people[k] = -1;
				for (int l = 0; l < 9; l++) {
					if (people[l] != -1) {
						cout << people[l] << '\n';
					}
				}
			}
			else {
				sum += people[k];
			}
		}
		sum = sum + people[j];
	}
	return 0;
}