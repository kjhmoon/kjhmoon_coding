#include <iostream>
using namespace std;

int main() {
	int T; // T개 테스트 데이터 즉. T명 테스트
	cin >> T;
				// 6층 12개방 10번째 = 402호 배정 10 / 6 = 1(1더해서 호수)..4(층수)
				// 2층 1개방 2번째 = 201호 배정 2 / 2 = 1(호수)...0(층수)
	int H; //호텔 건물 층 수(1층 이상)
	int W; // 한 층에 방 수(최대 99개방)
	int N; // 몇번째 사람인지 
	int A;	 //최종 층 
	int B; // 최종 방
	int C; //최종 호수
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N; // H,W,N 입력받기
		if (0 == N % H) {
			A = H;				//최종 층(int형) 계산하기
			B = (N / H);		//최종 방(int형) 계산하기 
			A = A * 100;
			C = A + B;
			cout << C << "\n";
		}
		else {
			A = N % H;				//최종 층(int형) 계산하기
			B = (N / H) + 1;		//최종 방(int형) 계산하기 
			A = A * 100;
			C = A + B;
			cout << C << "\n";
		}
	}
	
	return 0;
}