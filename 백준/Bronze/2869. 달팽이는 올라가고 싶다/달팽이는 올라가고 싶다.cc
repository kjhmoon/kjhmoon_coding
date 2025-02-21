#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int A;	//A미터 올라감
	int B; //B미터 미끄러짐
	int V; //막대의 길이
	long double i;
	cin >> A >> B >> V;
	i = (V - B) / (A - B);
	if ((V - B) % (A-B) == 0) {
		i = ceil(i);
		cout << int(i);
	}
	else {
		i++;
		cout << int(i);
	}
	
	return 0;
}
