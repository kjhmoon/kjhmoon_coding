#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int input_number[9];
int sum = 0; //난쟁이 키 합
int main() {
	for (int i = 0; i < 9; i++) {			//난쟁이 9명 받기
		cin >> input_number[i];
		sum += input_number[i];
	}
	for (int j = 0; j < 9; j++) {
		for (int k = j + 1; k < 9;) {
				if (sum - input_number[j] - input_number[k] == 100){					
					input_number[j] = -1;
					input_number[k] = -1;
					sort(input_number, input_number + 9);
					for (int m = 2; m < 9; m++) {
						cout << input_number[m] << '\n';
					}
					exit(0);
				}
				else {
					k++;
				}
			
		}
	}
	return 0;
}
