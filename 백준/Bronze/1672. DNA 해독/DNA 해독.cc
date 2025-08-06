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
	int N; //염기 서열의 길이
	char arr[1000000] = {};
	fill(arr, arr + 1000000, '@');
	string input;
	cin >> N;
	cin >> input;
	for (int i = 0; i < N; i++) {
		arr[i] = input[i];
	}
	N--;
	while (1) {
		if (arr[1] == '@') {
			cout << arr[0];
			exit(0);
		}
		else {
			if (arr[N] == arr[N - 1]) {
				arr[N] = '@';
				N--;
			}
			else if(arr[N] == 'A' && arr[N - 1] == 'G') {
				arr[N] = '@';
				arr[N-1] = 'C';
				N--;
			}
			else if (arr[N] == 'A' && arr[N - 1] == 'C') {
				arr[N] = '@';
				arr[N-1] = 'A';
				N--;
			}
			else if (arr[N] == 'A' && arr[N - 1] == 'T') {
				arr[N] = '@';
				arr[N-1] = 'G';
				N--;
			}
			else if (arr[N] == 'G' && arr[N - 1] == 'A') {
				arr[N] = '@';
				arr[N - 1] = 'C';
				N--;
			}
			else if (arr[N] == 'G' && arr[N - 1] == 'C') {
				arr[N] = '@';
				arr[N - 1] = 'T';
				N--;
			}
			else if (arr[N] == 'G' && arr[N - 1] == 'T') {
				arr[N] = '@';
				arr[N - 1] = 'A';
				N--;
			}
			else if (arr[N] == 'C' && arr[N - 1] == 'A') {
				arr[N] = '@';
				arr[N - 1] = 'A';
				N--;
			}
			else if (arr[N] == 'C' && arr[N - 1] == 'G') {
				arr[N] = '@';
				arr[N - 1] = 'T';
				N--;
			}
			else if (arr[N] == 'C' && arr[N - 1] == 'T') {
				arr[N] = '@';
				arr[N - 1] = 'G';
				N--;
			}
			else if (arr[N] == 'T' && arr[N - 1] == 'A') {
				arr[N] = '@';
				arr[N - 1] = 'G';
				N--;
			}
			else if (arr[N] == 'T' && arr[N - 1] == 'G') {
				arr[N] = '@';
				arr[N - 1] = 'A';
				N--;
			}
			else if (arr[N] == 'T' && arr[N - 1] == 'C') {
				arr[N] = '@';
				arr[N - 1] = 'G';
				N--;
			}
		}
	}
	return 0;
}