// Programmers 나누어 떨어지는 숫자 배열 문항.
// 간단한 modular연산과 sorting으로 해결 

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;
	int arr_sz = arr.size();
  //divisor로 나누어 떨어지는 수 answer에 담기
	for (int i = 0; i < arr_sz; i++) {
		if (arr[i] % divisor == 0) {
			answer.push_back(arr[i]);
		}
	}
  //divisor로 나누어 떨어지는 수가 없다면 answer에 -1 담기
	if (answer.size() == 0) {
		answer.push_back(-1);
		return answer;
	}
  //출력전 오름차순으로 정렬하기 위한 sorting
	sort(answer.begin(), answer.end());
	
	return answer;
}
