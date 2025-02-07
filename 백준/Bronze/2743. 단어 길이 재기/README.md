# [Bronze V] 단어 길이 재기 - 2743 

[문제 링크](https://www.acmicpc.net/problem/2743) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2025년 2월 6일 20:33:54

### 문제 설명

<p>알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.</p>

### 출력 

 <p>첫째 줄에 입력으로 주어진 단어의 길이를 출력한다.</p> 

### 소스

```
#include <iostream>
#include <string>
using namespace std;

int main() {
	string A;
	cin >> A;
	cout << A.length();

	return 0;
}
```

### 후기 
length함수와 size함수는 동일한 구현을 가진다. 
> size(): 컨테이너의 크기를 구하는 느낌으로 사용할 때
length(): 문자열의 길이를 표현할 때 직관적으로 사용

그럼 length 함수와 strlen함수의 차이는

#### ✅ 주요 차이점:

> 문자열 타입:
strlen은 C 스타일 문자열 (char*)에 사용(c언어)
length는 C++ std::string 객체에 사용(c++언어)


> 널 종료 문자:
strlen은 문자열 끝에 있는 '\0'을 기준으로 길이를 계산
length는 내부적으로 문자열의 길이를 저장하므로 종료 문자를 신경 쓸 필요 없음
