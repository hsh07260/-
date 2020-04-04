// Programers 체육복 문항

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;

	for (int i = 0; i < lost.size(); i++) {
		for (int j = 0; j < reserve.size(); j++) {
			if (lost[i] == reserve[j]) {
				reserve.erase(reserve.begin() + j);
				lost.erase(lost.begin() + i);
				i = 0;
			}
		}
	}

	answer = n - lost.size();

	for (int i = 0; i < lost.size(); i++) {
		for (int j = 0; j<reserve.size(); j++) {
			if (lost[i] - 1 == reserve[j]) {
				reserve.erase(reserve.begin() + j);
				answer++;
				break;
			}
			else if(lost[i] + 1 == reserve[j]) {
				reserve.erase(reserve.begin() + j);
				answer++;
				break;
			}
		}
	}

	return answer;
}

int solution2(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	vector<int> check(n+1, 1);
	for (int i = 0; i < lost.size(); i++) {check[lost[i]]--;}
	for (int i = 0; i < reserve.size(); i++) { check[reserve[i]]++; }

	for (int i = 1; i < check.size(); i++) {
		if (check[i] == 0) {
			if (check[i - 1] == 2) {
				check[i - 1]--;
				check[i]++;
			}
			else if (i+1 != check.size() && check[i + 1] == 2) {
				check[i + 1]--;
				check[i]++;
			}
		}
	}
	for (int i = 1; i < check.size(); i++) {
		if (check[i] != 0) { answer++; }
	}
	return answer;
}
