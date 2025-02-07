# [Bronze II] 단어의 개수 - 1152 

[문제 링크](https://www.acmicpc.net/problem/1152) 

### 성능 요약

메모리: 5964 KB, 시간: 48 ms

### 분류

구현, 문자열

### 제출 일자

2025년 2월 7일 10:22:32

### 문제 설명

<p>영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.</p>

### 입력 

 <p>첫 줄에 영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 단어는 공백 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열은 공백으로 시작하거나 끝날 수 있다.</p>

### 출력 

 <p>첫째 줄에 단어의 개수를 출력한다.</p>

### 소스
```
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	string A;
	int count = 0;

	getline(cin, A);

	istringstream ss(A);
	string word;

	while (ss >> word) {
		count++;
	}
	cout << count;
	return 0;
}

```
### 후기
이번에 배운 기능은 바로 sstream사용법이다. 

> istringstream: 입력 문자열을 읽기 위한 스트림 클래스(데이터 읽을때)
ostringstream: 출력 문자열을 쓰기 위한 스트림 클래스(데이터 출력할때)
stringstream: 입력 및 출력 문자열을 읽고 쓰기 위한 스트림 클래스(포함한 기능)

### ✅ istringstream:

> C++의 입력 스트림(istream)을 문자열(string)에서 읽을 수 있도록 해주는 클래스
쉽게 말해서 문자열을 "공백을 기준으로" 나눠서 처리할 수 있도록 해줌
cin이 키보드에서 입력을 받듯이, istringstream은 문자열 A에서 데이터를 가져옴

string과 count를 만들고 getline(cin,A)로 문장을 모두 string A에 저장 후
istringsteam ss(string) 으로 띄어쓰기 마다 단어를 분리, 이후 string word선언후 분리된 ss가 word에 단어 하나씩 저장(while문) 단어마다 저장하면서 count를 세어 단어수 측정 이후 cout << count실행
