// Programers 핸드폰 번호 가리기 문항

#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
	string answer = "";
	int phone_number_sz = phone_number.size();
	answer.assign(phone_number_sz - 4, '*');
	answer.append(phone_number.end()-4,phone_number.end());
	return answer;
}
