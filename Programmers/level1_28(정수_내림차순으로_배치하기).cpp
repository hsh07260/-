// Programmers 정수 내림차순으로 배치하기 문항

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

long long pos_num(int pos){
    if (pos == 0) {
		return 1;
	}

	long long ret = 1;

	for (int i = 0; i < pos; i++) {
		ret = ret * 10;
	}
	return ret;
}

long long solution(long long n) {
	long long answer = 0;
	vector<int> arr;
	while (n != 0) {
		arr.push_back(n % 10);
		n = n / 10;
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++) {
		answer = answer + arr[i] * pos_num(i);
	}
	return answer;
}
