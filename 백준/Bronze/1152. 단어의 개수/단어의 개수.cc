#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	string A;
	int count = 0;

	getline(cin, A);

	istringstream ss(A);
	string word;

	while (ss >> word) {
		count++;
	}
	cout << count;
	return 0;
}