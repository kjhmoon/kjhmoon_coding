#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>
#include <deque>
#include <utility>
using namespace std;

int main() {
    string input;                      //B진법인 수 input
    unsigned long int output = 0;   //2진수
    int B;
    int num = 0;   
    cin >> input >> B;
    reverse(input.begin(), input.end());
    for (int i = 0; i < input.length(); i++) {
        if (int(input[i]) >= 48 && int(input[i]) <= 57){
            num = int(input[i]) - 48;
        }
        else {
            num = int(input[i]) - 55;   //자리수 하나를 실제로 10진법으로 어떤수인지(ex. Z = 35)
        }
        unsigned long int num1 = 1;
        for (int j = 0; j < i; j++) {
            num1 = num1 * B;
        }
        output += num * num1;
    }
    cout << output;
    return 0;
}
