//Programmers 쇠막대기 문항

#include <string>
#include <vector>

using namespace std;

int solution(string arrangement) {
	int answer = 0;
	vector<char> stack;

	for (int i = 0; i < arrangement.size(); i++) {
		if (arrangement[i] == '(') {
			stack.push_back(arrangement[i]);
		}
		else {
			stack.pop_back();
			//막대기가 먼저 끝나는 경우
			if (arrangement[i - 1] == ')') {
				answer++;
			}
			//일반적으로 겹쳐진 막대기가 잘리는 경우
			else {
				answer += stack.size();
			}
		}
	}
	return answer;
}
