//Programmers 두 정수사이의 합 문항

#include <string>
#include <vector>

using namespace std;

void order(int a, int b, int *first, int *second) {
	if (a < b) {
		*first = a;
		*second = b;
	}
	else if(b<a) {
		*first = b;
		*second = a;
	}
}

long long solution(int a, int b) {
	if (a == b) {
		return a;
	}
	else {
		long long answer = 0;
		int first, second;
		order(a, b, &first, &second);
		for (int i = first; i < second + 1; i++) {
			answer += i;
		}
		return answer;
	}
}
