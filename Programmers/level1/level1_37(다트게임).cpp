// Programmers 다트게임 문항
// 다트 게임 결과 문자열을 2개씩 끊어 읽는 tmp 문자열을 이용
// stack 자료구조를 이용해 각 시행결과를 저장하여 '*' 과 '#' 연산을 수행.
// 모든 연산이 끝난 결과인 results_stack 의 내용을 모두 합해 결과로 반환.

#include <string>
#include <vector>

using namespace std;

int _single(int a) {
	return a;
}
int _double(int a) {
	return a*a;
}
int _triple(int a) {
	return a*a*a;
}
int total_sum(vector<int>stack) {
	int ret = 0;
	while (!stack.empty()) {
		ret += stack.back();
		stack.pop_back();
	}
	return ret;
}
int solution(string dartResult) {
	int answer = 0;
	string tmp = "";
	vector<int>results_stack ;
	for (int i = 0; i < dartResult.size(); i++) {
		if (dartResult[i] > 47 && dartResult[i] < 58) {
			tmp += dartResult[i];
		}
		else {
			if (dartResult[i] == 'S') {
				results_stack.push_back(_single(stoi(tmp)));
				tmp = "";
			}
			else if (dartResult[i] == 'D') {
				results_stack.push_back(_double(stoi(tmp)));
				tmp = "";
			}
			else if (dartResult[i] == 'T') {
				results_stack.push_back(_triple(stoi(tmp)));
				tmp = "";
			}
			else if (dartResult[i] == '*') {
				int now = results_stack.back();
				results_stack.pop_back();
				if (results_stack.empty()) {
					results_stack.push_back(now * 2);
					continue;
				}
				int prev = results_stack.back();
				results_stack.pop_back();
				results_stack.push_back(prev * 2);
				results_stack.push_back(now * 2);

			}
			else if (dartResult[i] == '#') {
				int now = results_stack.back();
				results_stack.pop_back();
				results_stack.push_back(now*(-1));
			}
		}
	}
	answer = total_sum(results_stack);

	return answer;
}
