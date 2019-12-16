// Programers 예산 문항
// 최대한 많은 부서에 지원을 하려면 액수가 작은 부서부터 할당해줘야함
// sorting을 통해 작은 액수부터 순서대로 더해 예산을 넘기는지 확인하면 됨.

#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
	int answer = 0;
	int total = 0;
	sort(d.begin(), d.end());
	for (int i = 0; i < d.size(); i++) {
		total += d[i];
		answer++;
		if (total > budget) {
			answer--;
			break;
		}
	}
	return answer;
}
