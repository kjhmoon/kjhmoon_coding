# [Bronze V] 문자열 - 9086 

[문제 링크](https://www.acmicpc.net/problem/9086) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2025년 2월 6일 22:09:41

### 문제 설명

<p>문자열을 입력으로 주면 문자열의 첫 글자와 마지막 글자를 출력하는 프로그램을 작성하시오.</p>

### 입력 

 <p>입력의 첫 줄에는 테스트 케이스의 개수 T(1 ≤ T ≤ 10)가 주어진다. 각 테스트 케이스는 한 줄에 하나의 문자열이 주어진다. 문자열은 알파벳 A~Z 대문자로 이루어지며 알파벳 사이에 공백은 없으며 문자열의 길이는 1000보다 작다.</p>

### 출력 

 <p>각 테스트 케이스에 대해서 주어진 문자열의 첫 글자와 마지막 글자를 연속하여 출력한다.</p>

### 소스
```
#include <iostream>
#include <string>
using namespace std;

int main() {
	string A;
	int T;
	cin >> T;
	cin.ignore();
	for (int i = 0; i < T; i++) {
		getline(cin, A);
		cout << A.front() << A.back() << "\n";
	}
	return 0;
}
```
### 후기

개행 문자 제거(cin.ignore())가 필요한 이유

> 1. cin >> T; 이후 개행 문자(\n) 문제
int T;
cin >> T; // 숫자 입력
getline(cin, A); // 문제 발생 가능!
cin >> T;에서 숫자를 입력받은 후, **Enter(개행 문자, '\n')**가 입력 버퍼에 남아 있습니다.
getline(cin, A);는 문자열을 읽을 때 개행 문자도 포함하여 처리하는데,
getline()은 개행 문자(\n)를 만나면 멈추므로, 첫 번째 getline()은 빈 문자열("")을 읽습니다.

2. 개행 문자 제거 방법

> cin.ignore();
cin.ignore();는 입력 버퍼에 남아 있는 개행 문자(\n)를 제거하여 다음 getline(cin, A);이 정상적으로 실행되도록 합니다.

+새로운 기능 string.front() / string.back 
> string의 각 첫글자와 마지막 글자를 가져올수있다.

