// programmers 제일 작은 수 제거하기 문항

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
	arr.erase(min_element(arr.begin(), arr.end()));
	if (arr.empty()) {
		return { -1 };
	}
	return arr;
}
