//Programmers 탑 문항

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
	vector<int> answer;
	answer.push_back(0);
	for (int i = 1; i < heights.size(); i++) {
		int j = i-1;
		while (j >= 0) {
			if (heights[i] < heights[j]) {
				answer.push_back(j + 1);
				break;
			}
			j--;
		}
		if (j < 0) {
			answer.push_back(0);
		}
	}
	return answer;
}
