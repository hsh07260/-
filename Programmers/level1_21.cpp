// Programers 이상한 문자 만들기
// string 클래스의 find()와 substr() 함수를 통해 단어를 쪼개서 문자열 처리
// string의 find()와 substr()의 오버로딩된 내용 확인 필요

#include <string>
#include <vector>
#include <iostream>

using namespace std;


//공백으로 기준하여 단어로 쪼개는 함수 
vector<string> split(const string s) {
	vector<string> ret;
	int prev_pos = 0, pos = 0;
	while ((pos=s.find(' ', pos)) != string::npos) {
		ret.push_back(s.substr(prev_pos, pos - prev_pos));
		prev_pos = ++pos;
	}
	//ret.push_back(s.substr(prev_pos, pos - prev_pos));
	ret.push_back(s.substr(prev_pos));
	return ret;
}
//단어를 주어진 규칙에 맞게 소문자와 대문자를 처리하여 변환하는 함수
string convert(const string s) {
	string ret = s;
	int s_sz = ret.size();
	for (int i = 0; i < s_sz; i++) {
		if (i % 2 == 0) {
			ret[i] = toupper(ret[i]);
		}
		else {
			ret[i] = tolower(ret[i]);
		}
	}
	return ret;
}
string solution(string s) {
	string answer = "";
	vector<string> splited_s = split(s);
	for (int i = 0; i < splited_s.size(); i++) {
		answer += convert(splited_s[i]);
		if (i != splited_s.size() - 1) {
			answer += ' ';
		}
	}
	return answer;
}
