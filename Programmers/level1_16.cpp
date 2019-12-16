//Programers 문자열 내 p와 y의 개수 문항

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
	bool answer = true;
	int p_cnt = 0, y_cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'p' || s[i] == 'P') {
			p_cnt++;
			continue;
		}
		else if (s[i] == 'y' || s[i] == 'Y') {
			y_cnt++;
			continue;
		}
	}
	if (p_cnt != y_cnt) {
		answer = false;
	}

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "Hello Cpp" << endl;

	return answer;
}
