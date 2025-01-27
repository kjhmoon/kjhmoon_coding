#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	cin >> b;
	
	if (a < b) 					// 만약 a>b라면
		cout << "<";			// "<"출력

	else if (a>b)  							// 만약 a<b라면
		cout << ">";			// ">"출력
	
	if (a == b) 					// a=b라면
		cout << "==";			// "=="출력
	
	return 0;
}