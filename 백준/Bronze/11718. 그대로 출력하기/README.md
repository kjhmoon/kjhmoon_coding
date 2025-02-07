# [Bronze III] 그대로 출력하기 - 11718 

[문제 링크](https://www.acmicpc.net/problem/11718) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2025년 2월 6일 21:52:35

### 문제 설명

<p>입력 받은 대로 출력하는 프로그램을 작성하시오.</p>

### 입력 

 <p>입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 각 줄은 100글자를 넘지 않으며, 빈 줄은 주어지지 않는다. 또, 각 줄은 공백으로 시작하지 않고, 공백으로 끝나지 않는다.</p>

### 출력 

 <p>입력받은 그대로 출력한다.</p>

### 소스
```
#include <iostream>
#include <string>
using namespace std;

int main() {
	string A;
	while (getline(cin, A)) cout << A << "\n";
	return 0;
}

```
### 후기 
stirng과 char 문자열과 getline함수의 대해 헷갈리니 짚고 넘어가보자

std::cin은 공백(스페이스)을 만나면 입력을 중단하지만, std::getline()은 엔터(개행 문자)를 만날 때까지 입력을 받습니다.
