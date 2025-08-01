#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

int main() {
	int n;		//식당 정보 개수 
	int S;		//유형
	int a;		//학생 번호
	int b;		//음식메뉴
	queue <int> A;
	queue <int> B;
	queue <int> C;
	vector <int> V;
	cin >> n;

	queue < pair<int, int>> q; //(a,b) 학생번호,음식메뉴 큐 생성
	for (int i = 0; i < n; i++) {	//n번 반복
		cin >> S;
		if (S == 1) {
			cin >> a >> b;
			q.push(make_pair(a, b));
			C.push(a);
		}
		else {
			cin >> b;
			if (q.front().second == b) {
				A.push(q.front().first);
				q.pop();
				C.pop();
			}
			else if(q.front().second != b){
				B.push(q.front().first);
				q.pop();
				C.pop();
			}
			else {
				C.push(q.front().first);
				q.pop();
			}
		}
	}

	if (A.empty() == 1) {				// A 출력
		cout << "None";
	}
	if (A.empty() == 0) {			
		while (!A.empty()) {
			V.push_back(A.front());
			A.pop();
		}	
	}
	sort(V.begin(), V.end());
	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	V.clear();
	cout << '\n';

	if (B.empty() == 1) {				// B 출력
		cout << "None";
	}
	if (B.empty() == 0) {
		while (!B.empty()) {
			V.push_back(B.front());
			B.pop();
		}
	}
	sort(V.begin(), V.end());
	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	V.clear();
	cout << '\n';

	if (C.empty() == 1) {				// C 출력
		cout << "None";
	}
	if (C.empty() == 0) {
		while (!C.empty()) {
			V.push_back(C.front());
			C.pop();
		}
	}
	sort(V.begin(), V.end());
	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	V.clear();
	cout << '\n';

	return 0;
}