#include <iostream>
using namespace std;

int main() {

	int i, j,n;						 		// 변수i,j  j번째 줄까지 반복
										//변수 n  i번째 줄 만큼 *출력
	cin >> j;								//j입력받기 

	for (i = 1; i < j+1;) {							//i=1부터 시작해서 j+1만큼 반복해서 총 j번 반복하게 for문 작성
		for (n = 1; n < i+1;) {						//n번만큼 반복해서 *를 i+1번 만큼 반복해서 출력
			cout << "*";				
			n++;
		}
		cout << "\n";							//반복하고 들여쓰기 
		i++;								
	}
	return 0;
}
