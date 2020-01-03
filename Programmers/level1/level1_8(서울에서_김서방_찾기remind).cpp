// Programmers 서울에서 김서방 찾기 문항.
// c++ string에 대한 이해 부족으로 시간걸림
// c++의 string은 c에서 string.h 와 다르게 operator가 되어있어
// 문자열끼리 +, -, =, == 연산이 가능하다

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
	string answer = "";
	int seoul_sz = seoul.size();

	for (int i = 0; i < seoul_sz; i++) {
		if (seoul[i] == "Kim") {
			answer = "김서방은 " + to_string(i) + "에 있다";
			return answer;
		}
	}
}
