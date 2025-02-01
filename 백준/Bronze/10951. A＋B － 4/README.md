# [Bronze V] A+B - 4 - 10951 

[문제 링크](https://www.acmicpc.net/problem/10951) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현, 사칙연산, 수학

### 제출 일자

2025년 2월 1일 15:10:46

### 문제 설명

<p>두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.</p>

### 입력 

 <p>입력은 여러 개의 테스트 케이스로 이루어져 있다.</p>

<p>각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)</p>

### 출력 

 <p>각 테스트 케이스마다 A+B를 출력한다.</p>

### 소스(개선전 코드)
```
#include <iostream>
using namespace std;

int main() {
	int a, b; 
	while (cin >> a >> b){
		cout << a + b << "\n";
		if (a,b == EOF) {
			break;
		}
	}
	return 0;
}
```
### 소스(개선후 코드)
```
int main() {
	int a, b; 
	while (!(cin >> a >> b).eof()) {
		cout << a + b << "\n";
		}
	return 0;
}
```
### 후기
일단 a, b == eof라는 문법은 성립하지 않는다. b == eof로 인식하기 때문에 이게 아니라 while문에 .eof()함수를 이용해서 a, b를 cin 하고서 eof가 존재하는지 여부를 확인 후 만약 eof함수가 참이라면 좌측 코드에 !가 붙어 F가 되면서 while 문이 거짓이 되어 while 문에서 나오게 된다는 것이다. 이 문제의 특징은 만약 몇 개의 변수를 받을지 정해지지 않으면 .eof() 함수를 통해 확인할 수 있다는 점이 키포인트이다. 
