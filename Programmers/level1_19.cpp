// Programers 문자열을 정수로 바꾸기 문항
// String을 한번에 int 형으로 변환하기 위해 String -> c_str()함수 이용 -> int형 변환
// atoi함수를 사용하기 위해서 c에서의 string 형식(끝에 null 포함)으로 변환해줘야 함
// C++에서 string을 c_str() 함수를 통해 c언어 에서의 string 변환 후 atoi() 적용

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	int s_sz = s.size();
	int answer = 0;

	bool sign = true;  // + 는 true - 는 false
	if (s[0] == '-') {
		string tmp = s.assign(s.begin() + 1, s.end());
		return answer = (-1) * atoi(tmp.c_str());
	}
	else {
		answer = atoi(s.c_str());
	}
	return answer;
}
