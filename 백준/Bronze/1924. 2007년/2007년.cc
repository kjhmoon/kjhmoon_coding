#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {				
	int x, y;		//월,일
	string week[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int count = 0; //해당 달의 1일이 무슨요일인지 알기위한 count
	int count_day = 0; //해당 달의 요일을 알기 위한 count
		cin >> x >> y;
		for (int i = 1; i < x; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
				count += 3;
			}
			else if (i == 4 || i == 6 || i == 9 || i == 11) {
				count += 2;
			}
		}
		if (count >= 7) {
			count = count % 7;
		}
		if (y > 7) {
			count_day = (y % 7) -1;
		}
		if (y < 7) {
			count_day = y-1; 
		}
		if (y % 7 == 0) {
			count_day = 6;
		}
		count_day = count_day + count;
		if (count_day >= 7) {
			count_day = count_day % 7;
		}
		cout << week[count_day] << '\n';
	return 0;
}