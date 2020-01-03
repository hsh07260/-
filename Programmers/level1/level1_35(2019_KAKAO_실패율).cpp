// Programmers 실패율 문항
// 실패율 : 스테이지에 도달했으나 아직 클리어하지 못한 플레이어 수 / 스테이지에 도달한 플레이어수
// 스테이지의 개수 N, 사용자가 현재 멈취있는 스테이지 번호의 배열 stages
// 실패율을 구할 때, 도달한 플레이어수가 없어 arrival의 값이 0 인 경우, 오류이므로
// 도달한 플레이어 수가 0인 경우 실패율을 0으로 잘 처리 해줘야함

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

float fail_rate(vector<int> stages, int cmp) {
	float not_yet = 0;
	float arrival = 0;
	
	for (int i = 0; i < stages.size(); i++) {
		if (stages[i] > cmp) {
			arrival++;
		}
		else if (stages[i] == cmp) {
			arrival++;
			not_yet++;
		}
	}
	if (arrival == 0) {
		return 0;
	}
	return not_yet / arrival;
}

vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	vector<float> fail;
	for (int i = 1; i < N+1; i++) {
		fail.push_back(fail_rate(stages, i));
	}
	for (int i = 1; i < N + 1; i++) {
		vector<float>::iterator max_iter = max_element(fail.begin(), fail.end());
		int max_idx = max_iter - fail.begin();
		answer.push_back(max_idx+1);
		fail[max_idx] = -1;
	}
	return answer;
}
