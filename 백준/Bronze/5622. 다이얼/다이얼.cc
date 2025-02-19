#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    string english = { "ABC DEF GHI JKL MNO PQRS TUV WXYZ" };
    string input_word;
    int count = 0;
    cin >> input_word;
    for (int i = 0; i < input_word.length(); i++) {
        if (input_word[i] == 'A' || input_word[i] == 'B' || input_word[i] == 'C') {
            count += 3;
        }
        else if (input_word[i] == 'D' || input_word[i] == 'E' || input_word[i] == 'F') {
            count += 4;
        }
        else if (input_word[i] == 'G' || input_word[i] == 'H' || input_word[i] == 'I') {
            count += 5;
        }
        else if (input_word[i] == 'J' || input_word[i] == 'K' || input_word[i] == 'L') {
            count += 6;
        }
        else if (input_word[i] == 'M' || input_word[i] == 'N' || input_word[i] == 'O') {
            count += 7;
        }
        else if (input_word[i] == 'P' || input_word[i] == 'Q' || input_word[i] == 'R' || input_word[i] == 'S') {
            count += 8;
        }
        else if (input_word[i] == 'T' || input_word[i] == 'U' || input_word[i] == 'V') {
            count += 9;
        }
        else if (input_word[i] == 'W' || input_word[i] == 'X' || input_word[i] == 'Y' || input_word[i] == 'Z') {
            count += 10;
        }

    }
    cout << count;
    return 0;
}
