#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {   
int row = -1; // 행(가로) 위치저장용
int col = -1; // 열(세로) 위치저장용
int arr[10][10];
int max = -1; //최대값
for(int i = 1; i<10; i++){
for(int j = 1; j<10; j++){
cin >> arr[i][j];
if(max < arr[i][j]){
	max = arr[i][j];
	row = i;
	col = j;
}
}
}
cout << max << '\n' << row << ' ' << col;
	return 0;
}