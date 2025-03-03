#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

string multiplyStrings(string num1, string num2) {
    int len1 = num1.size(), len2 = num2.size();
    vector<int> result(len1 + len2, 0);  // 결과를 저장할 배열

    // 뒤에서부터 곱하기 (자릿수 계산)
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0'); // 숫자로 변환 후 곱셈
            int sum = mul + result[i + j + 1]; // 기존 값과 합산

            result[i + j + 1] = sum % 10;  // 현재 자리수 저장
            result[i + j] += sum / 10;     // 올림값 처리
        }
    }
    // 결과를 문자열로 변환 (앞의 0 제거)
    string product;
    for (int num : result) {
        if (!(product.empty() && num == 0)) { // 앞의 0 무시
            product += (num + '0');
        }
    }
    return product.empty() ? "0" : product;
}

int main() {
    string num1; //숫자1(자리수 높은것)
    string num2; //숫자2(자리수 같거나 낮은것)
    string num3; // 숫자 바꿀때 공간
    int k; // k번 입력 받기
    int n; // 자리수 다를 경우 n만큼 이동
    int l; // 자리수 이동할때 마지막 배열 주소
    string A; //기존 곱하기 풀이방식 
    string B = { }; //새로운 곱하기 풀이방식
    cin >> k; //k번 입력 받기
    for (int i = 0; i < k; i++) {
        cin >> num1 >> num2;
        A = multiplyStrings(num1, num2);
    if (num1.length() < num2.length()) { //문자열 큰게 num1로 바꾸기 위한 if문
            num3 = num2;
            num2 = num1;
            num1 = num3;
        }
        n = num1.length() - num2.length(); //문자열 차이 구하기
        l = num2.length();
        num3 = { };
    if (n > 0) {
        for (int l = 0; l < n; l++) {
            num3 += '1';
            }
        num3 += num2;
    }
    else {
        num3 = num2;
    }
   
    for (int n = 0; n < num1.length(); n++) { //각 자리수마다 곱해서 stirng 추가
            B += to_string((num1[n] - '0') * (num3[n] - '0'));
        }

    if (A == B) {
            cout << 1 << '\n';      
        }
    else {
            cout << 0 << '\n';     
        }
        num1 = { };
        num2 = { };
        num3 = { };
        A = { };
        B = { };
        n = 0;
        l = 0;
    }
    return 0;
}