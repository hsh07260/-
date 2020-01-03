// Programmers 콜라츠 추측 문항
// num을 연산하는 과정에서 int형 범위를 벗어나기 때문에
// 최소한 500번의 연산을해도될 정도의 정수형 변수를 선언하여 연산과정을 거쳐야 한다.
#include <string>
#include <vector>

using namespace std;

int solution(int num) {
	unsigned long long buf = (unsigned long long)num;
	int answer = 0;
	int cnt = 0;
	
	while (buf != 1) {
		if (buf % 2 == 0) {
			buf = buf / 2;
		}
		else {
			buf = buf * 3 + 1;
		}
		cnt++;
		if ((buf != 1) && (cnt > 500)) return -1;
	}
	answer = cnt;

	return answer;
}
