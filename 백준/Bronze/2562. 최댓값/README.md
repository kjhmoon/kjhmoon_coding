# [Bronze III] 최댓값 - 2562 

[문제 링크](https://www.acmicpc.net/problem/2562) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2025년 2월 3일 21:42:34

### 문제 설명

<p>9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.</p>

<p>예를 들어, 서로 다른 9개의 자연수</p>

<p>3, 29, 38, 12, 57, 74, 40, 85, 61</p>

<p>이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.</p>

### 입력 

 <p>첫째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다. 주어지는 자연수는 100 보다 작다.</p>

### 출력 

 <p>첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.</p>

### 소스(코드 개선 전)
```
#include <iostream>
using namespace std;

int main() {
	int ary[8];
	int A,B;
	A = ary[0];
	for (int i = 0; i < 8; i++) {
		cin >> ary[i];
	}
	for (int j = 0; j < 8; j++) {
		if (A < ary[j]) {
			A = ary[j];
		}
	}
	for (int n = 1; n < 8; n++) {
		if (A == ary[n]) {
			B = n;
		}
	}
	cout << A << "\n";
	cout << B;
	return 0;
}
```
### 소스(코드 개선 후)
```
#include <iostream>
using namespace std;

int main() {
	int num, max = -1;
	int a;
	for (int i = 1; i <= 9; i++) {
		cin >> num;
			if (num > max) {
				max = num;
				a = i;
		}
	}
	cout << max << "\n";
	cout << a;

	return 0;
}
```
### 후기
내가 만든 코드와 정답과 거리가 너무 다르다. 나는 좀 장황하게 코딩한게 많은데 for문 하나로 다 넣어서 간단하게 만드는게 필요하다. 알고리즘은 같은데 for문 안에는 1부터 시작해서 숫자 비교후 max값보다 큰 num이 나온다면 그 값을 max값으로 재설정하고 그 당시 몇번째 for문인지 i를 a에 대입해서 업데이트를 하는 방식이다. 이렇게 하면 굳이 배열 필요없이 만들 수 있게 된다. 


