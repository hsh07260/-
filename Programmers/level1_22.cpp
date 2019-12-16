// Programers 자연수 뒤집어 배열로 만들기 문항

#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
	vector<int> answer;
	long long buf = n;
	while (buf != 0) {
		answer.push_back(buf % 10);
		buf = buf / 10;
	}
	return answer;
}
