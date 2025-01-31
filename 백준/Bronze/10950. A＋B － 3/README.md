# [Bronze V] A+B - 3 - 10950 

[문제 링크](https://www.acmicpc.net/problem/10950) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현, 사칙연산, 수학

### 제출 일자

2025년 1월 31일 20:55:39

### 문제 설명

<p>두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄에 테스트 케이스의 개수 T가 주어진다.</p>

<p>각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)</p>

### 출력 

 <p>각 테스트 케이스마다 A+B를 출력한다.</p>

### 소스(개선전 소스)

```
#include <iostream>
using namespace std;

int main() {
	int a, b=0;
	int t;
	int ary[10000];
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a;
		cin >> b;
		ary[i] = a + b;
	}
	for (int i = 0; i < t; i++) {
		cout << ary[i]<<"\n";
	}
	return 0;
}
```
### 소스(개선후 소스)
```
#include <iostream>
using namespace std;

int main() {
	int a, b;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << a + b<<"\n";
	}
	return 0;
}
```
### 후기 
좀 장황하게 코딩을 한거 같아서 피드백을 하기 위해 작성하였다. 단순히 t개의 짝지어진 두 수를 더해서 출력만 하기 때문에 배열을 사용하지 않고 for문으로 a,b를 반복적으로 받아 바로 출력하는 것이다. 그러면 for문을 사용해서 배열을 출력할 필요가 없어지기 때문에 간결해진다. 또한 내가 몰랐던 점은 cin으로 두 수를 받을때는 
```
cin >> a,b;
```
가 아니라 
```
cin >> a >> b;
```
이런식으로 받는것이다. 
