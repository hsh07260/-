// Programmers 정수 제곱근 판별 문항
// cmath 사용
#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
	long long answer = 0;
	long long n_int_sqrt = (long long)sqrt(n);
	if (n == (long long)(n_int_sqrt * n_int_sqrt)) {
		answer = (long long)((n_int_sqrt + 1)*(n_int_sqrt + 1));
	}
	else {
		answer = -1;
	}
	return answer;
}
