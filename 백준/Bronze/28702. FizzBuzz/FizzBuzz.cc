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
    string a = { };             //첫번째 힌트 문자열
    string b = { };             //두번째 힌트 문자열
    string c = { };             //세번째 힌트 문자열
    int i = 0;
    cin >> a >> b >> c;
    regex number_regex("^[0-9]+$");
    if (regex_match(a, number_regex)){
        i = stoi(a) + 3;
        if (i % 3 == 0 || i % 5 == 0) {
            if (i % 3 == 0 && i % 5 == 0) {
                cout << "FizzBuzz";
                exit(0);
            }
            if (i % 3 == 0 && i % 5 != 0) {
                cout << "Fizz";
                exit(0);
            }
            if (i % 5 == 0 && i % 3 != 0) {
                cout << "Buzz";
                exit(0);
            }
        }
        else {
            cout << i;
        }
    }
    else if (regex_match(b, number_regex)) {
        i = stoi(b) + 2;
        if (i % 3 == 0 || i % 5 == 0) {
            if (i % 3 == 0 && i % 5 == 0) {
                cout << "FizzBuzz";
                exit(0);
            }
            if (i % 3 == 0 && i % 5 != 0) {
                cout << "Fizz";
                exit(0);
            }
            if (i % 5 == 0 && i % 3 != 0) {
                cout << "Buzz";
                exit(0);
            }
        }
        else {
            cout << i;
        }
    }
    else if (regex_match(c, number_regex)) {
        i = stoi(c) + 1;
        if (i % 3 == 0 || i % 5 == 0) {
            if (i % 3 == 0 && i % 5 == 0) {
                cout << "FizzBuzz";
                exit(0);
            }
            if (i % 3 == 0 && i % 5 != 0) {
                cout << "Fizz";
                exit(0);
            }
            if (i % 5 == 0 && i % 3 != 0) {
                cout << "Buzz";
                exit(0);
            }
        }
        else {
            cout << i;
        }
    }
    return 0;
}