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
	int n;
	int fibonach[46];
	fill(fibonach, fibonach + 46, -1);
	cin >> n;
	fibonach[0] = 0;	
	fibonach[1] = 1;
	int i = 0; 
	while (fibonach[n] == -1) {
		fibonach[i + 2] = fibonach[i] + fibonach[i + 1];
		i++;
	}
	cout << fibonach[n];
}