// Programmers 비밀지도 문항
// 지도로 주어진 두 arr를 OR 비트연산을 통해 수들을 합쳐준다
// 합쳐진 지도를 바탕으로 각 수의 비트단위로 체크하여 1인부분을 #, 0인 부분을 공백으로 문자열 생성
// 상위 비트 데이터부터 처리하고자 시프트 연산을 통해 1을 n-1만큼 옮겨 처리
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string decoding(int summed_value, int n) {
	string ret;
	int cmp = 1 << n-1;
	for (int i = 0; i < n; i++) {
		if (summed_value & cmp) {
			ret.append("#");
		}
		else {
			ret.append(" ");
		}
		summed_value = summed_value << 1;
	}
	return ret;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;
	for (int i = 0; i < n; i++) {
		int summed_value = arr1[i] | arr2[i];
		answer.push_back(decoding(summed_value, n));
	}
	 

	return answer;
}
