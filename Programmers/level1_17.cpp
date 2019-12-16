//Programers 문자열 다루기 기본 문항

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	int s_sz = s.size();
	
	if (s_sz != 4 && s_sz != 6) {
		return false;
	}
	bool answer = true;
	
	for (int i = 0; i < s_sz; i++) {
		if (isalpha(s[i])) {
			return false;
		}
	}
	return answer;
}
