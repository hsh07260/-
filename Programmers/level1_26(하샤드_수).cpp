// Programmers 하샤드 수 문항

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
	bool answer = true;
	int buf = x, pos_sum=0 ;
	vector<int> arr;
	while (buf != 0) {
		pos_sum = pos_sum + (buf%10);
		buf = buf / 10;
	}
	if (x%pos_sum != 0) {
		return false;
	}
	
	return answer;
}
