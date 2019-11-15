// Programers 시저암호 문항
//string 에서 문자 하나씩 다루는 문제
//테스트케이스에 걸려 시간이 걸림

#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
	n = n % 26;
	string answer = "";
	int str_lenth = s.size();
	// ASCII => a == 97 , A == 65
	for (int i = 0; i < str_lenth; i++) {
		char c = s[i];
		if (c == ' ') {
			answer.push_back(' ');
			continue;
		}
    
		unsigned char tmp = c + n;

		// 소문자인 경우
		if (c >= 'a' && c <= 'z') {
			//소문자이고, n을 더한 값이 z를 넘어가는 경우
			if (tmp  > 'z') {
				tmp = 'a' + (tmp - 'z') - 1;
			}
		}
		//대문자인 경우
		else if (c >= 'A' && c <= 'Z') {
			//대문자이고, n을 더한 값이 Z를 넘어가는 경우
			if(tmp > 'Z'){
				tmp = 'A' + (tmp - 'Z') - 1;
			}
		}
		answer.push_back(tmp);
	}
	return answer;
}
