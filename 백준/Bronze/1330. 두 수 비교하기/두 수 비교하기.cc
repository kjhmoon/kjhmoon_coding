#include <iostream>
using namespace std;

int main() {	
	int a, b;				//변수타입 지정
	cin >> a;				//변수 a 입력 받기
	cin >> b;				//변수 b 입력 받기
	
	if (a < b) 				// 만약 a>b라면
		cout << "<";			// "<"출력

	else if (a>b)  				// 아니면, 만약 a<b라면
		cout << ">";			// ">"출력
	
	if (a == b) 				// a=b라면
		cout << "==";			// "=="출력
	
	return 0;
}
