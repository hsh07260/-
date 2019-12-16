// Programers 가운데 글자 가져오기 문항.
// 간단한 문자 추출
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	int s_len = s.length();
	if (s_len % 2 == 0) {
		answer.assign(s.begin() + s_len / 2 - 1, s.begin() + s_len / 2 + 1);
	}
	else {
		answer = s[s_len / 2];
	}
	return answer;
}
