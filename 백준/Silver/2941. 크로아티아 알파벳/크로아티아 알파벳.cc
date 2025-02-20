#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	string input_word;
	string substr_word;
	string substr_word2;
	int count = 0;
	cin >> input_word;
	for (int i = 0; i < input_word.length();) {
		int j = 0;
		int m = 0;
		int n = 0;
		substr_word = input_word.substr(i, j + 2);
		substr_word2 = input_word.substr(i, j + 3);
		if (substr_word == "c=" || substr_word == "c-" || substr_word2 == "dz=" || substr_word == "d-" || substr_word == "lj" || substr_word == "nj" || substr_word == "s=" || substr_word == "z=")
		{
			if (substr_word2 == "dz=") {
				i = i + 3;
				count++; 
			}
			else {
				i = i + 2;
				count++;
			}
		}
		else {
			i = i + 1;
			count++;
		}
	}
	cout << count;
	return 0;
}
