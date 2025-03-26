#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {				
	int N, M;
	int sum = 0;
	cin >> N >> M;
	sum += M - 1;
	sum += (N - 1)*M;;
	cout << sum;
	return 0;
}