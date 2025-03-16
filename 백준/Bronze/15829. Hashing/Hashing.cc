#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <regex>
using namespace std;

int main() {
    long long int sum = 0;      //최종 해시값
    int n;                          //글자 개수
    char input;                      //글자 input
    int input_int;              //input int형변환
    int count = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;                       
        input_int = int(input) - 96;
        for (int j = 0; j < i; j++) {
            count = count * 31;
        }
        sum += input_int * count;
        count = 1;
    }
    cout << sum << '\n';
    return 0;
}