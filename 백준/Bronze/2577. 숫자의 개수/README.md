# [Bronze II] 숫자의 개수 - 2577 

[문제 링크](https://www.acmicpc.net/problem/2577) 

### 성능 요약

메모리: 2076 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 제출 일자

2025년 2월 7일 11:08:40

### 문제 설명

<p>세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.</p>

<p>예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.</p>

### 입력 

 <p>첫째 줄에 A, 둘째 줄에 B, 셋째 줄에 C가 주어진다. A, B, C는 모두 100보다 크거나 같고, 1,000보다 작은 자연수이다.</p>

### 출력 

 <p>첫째 줄에는 A × B × C의 결과에 0 이 몇 번 쓰였는지 출력한다. 마찬가지로 둘째 줄부터 열 번째 줄까지 A × B × C의 결과에 1부터 9까지의 숫자가 각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력한다.</p>

### 소스
```
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	int A, B, C;				// A,B,C int형 선언 
	int mul;					// 3개의 정수를 곱할 mul변수
	string act;					// mul변수를 string act으로 변환
	int correct[10] = { };		// string act에서 count할 배열
	stringstream ss;			// stringstream ss 선언 
	cin >> A >> B >> C;			// A,B,C 입력받기
	mul = A * B * C;			// mul 구하기
	ss << mul;			        // 정수형 mul을 문자열 스트림 ss에 집어넣기
	ss >> act;					// 문자열 스트림 ss를 string act에 집어넣기
	for (int i = 0; i < act.length(); i++) {   
		if (act[i] == '0') {
			correct[0]++;
		}
		if (act[i] == '1') {
			correct[1]++;
		}
		if (act[i] == '2') {
			correct[2]++;
		}
		if (act[i] == '3') {
			correct[3]++;
		}
		if (act[i] == '4') {
			correct[4]++;
		}
		if (act[i] == '5') {
			correct[5]++;
		}
		if (act[i] == '6') {
			correct[6]++;
		}
		if (act[i] == '7') {
			correct[7]++;
		}
		if (act[i] == '8') {
			correct[8]++;
		}
		if (act[i] == '9') {
			correct[9]++;
		}
	}
	for (int j = 0; j < 10; j++) {
		cout << correct[j] << "\n";
	}
	return 0;
}
```
