//********** 풀지 못한 문제 ***********
// Programers 문자열 내 마음대로 정렬하기
// sort() 활용으로 풀 수 있지만, sort() 에 대한 이해 부족
// sort() 는 quick sort 기반으로 algorithm 헤더에 구현되어 있다.
// 사용자만의 정렬 기준을 작성하여 세번째 파라미터로 쓸 수 있음.
// sort( [시작점] , [끝점], [정렬 기준] )
// [정렬 기준]은 default로 오름차순, 사용자가 정의하여 사용할 수 있음.
// 사용자가 기준을 정의할 경우, bool형의 반환으로 기준 함수 작성

#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int N;

// 사용자 정의 sort 기준 "mysort"
bool mysort(string a, string b) {
	if (a.at(N) != b.at(N)) return a.at(N) < b.at(N);
	else return a < b;
}

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;

	N = n;

	sort(strings.begin(), strings.end(), mysort); //사용자 정의 sorting 기준을 사용한 sort()
	answer = strings;

	return answer;
}
