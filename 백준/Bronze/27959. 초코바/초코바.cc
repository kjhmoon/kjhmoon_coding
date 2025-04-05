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
    int N, M;
    cin >> N >> M;
    N = N * 100;
    if(N >= M){
        cout << "Yes";
        exit(0);
    }
    else{
        cout << "No";
        exit(0);
    }
return 0;
}