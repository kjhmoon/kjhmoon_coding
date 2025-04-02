#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
using namespace std;

int main() {				
	stack<int> st1; //기다리고 있는줄(역순임)
	stack<int> st3; //기다리고 있는줄(정방향)
	stack<int> st2; //해당 번호 아니라서 옆으로 빠지는 줄
	int ary[1000] = { };  //최종 입력된 줄
	int count = 1;  //현재 찾고있는 번호 
	int count1 = 0; //추후 옆으로 빠지는 줄 반복하기 위한 번호
	int n;
	int input;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		st1.push(input);
	}
	while(!st1.empty()){
		st3.push(st1.top());
		st1.pop();
	}
	for (int j = 0; j < n; j++) {
		if (st3.top() == count) { //count 올리고 st1.top 이동 후 pop
			ary[count] = count;
			st3.pop();
			count++;
		}
		else { //st1.top st2로 이동후 pop 
			while (!st2.empty()) {
				if (st2.top() == count) {
					ary[count] = count;
					st2.pop();
					count++;
				}
				else {
					break;
				}
			}
				st2.push(st3.top());  //기다리는줄 -> 옆으로 빠지는줄 
				st3.pop();
		}
	}
	while (!st2.empty()) {
		ary[count] = st2.top();
		st2.pop();
		count++;
	}
	for (int l = 1; l < count; l++) {
		if (ary[l] != l) {
			cout << "Sad";
			exit(0);
		} 
	}
	cout << "Nice";
	return 0;
}