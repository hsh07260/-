// Programers 문자열 내림차순으로 배치하기 문항
// sort() 와 사용자 기준 함수를 작성하여 간단하게 해결 가능

#include <string>
#include <ctype.h>
#include <vector>
#include <algorithm>

using namespace std;

// 사용자 정의 sort 기준 함수
bool mysort(char a, char b) {
	// 대문자인 경우 무조건 뒤로 보내기
	if (isupper(a) && islower(b)) {
		return false;
	}
	return a > b;
}

string solution(string s) {
	string answer = "";

	sort(s.begin(), s.end(), mysort);
	answer = s;

	return answer;
}
