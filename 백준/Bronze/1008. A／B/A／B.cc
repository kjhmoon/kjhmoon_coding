#include <iostream>
using namespace std;

int main() {
	long double a, b;				//변수 타입 설정

	cin >> a;			//변수 스캔 
	cin >> b;

	cout.precision(15);
	cout << a / b << endl;		//변수 출력

	return 0;
}
