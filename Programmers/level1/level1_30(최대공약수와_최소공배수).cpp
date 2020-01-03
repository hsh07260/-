// Programmers 최대공약수와 최소공배수 문항
// 문제의 solution 함수가 int 형으로 1000000, 999999과 같은 수의
// 최소공배수를 구하면 오버플로우가 발생.
// 최대공약수 => 1 ~ 둘 중 작은수 범위로 약수를 구해 가장 큰 것
// 최소공배수 => 둘의 곱을 최대공약수로 나눈 것 
#include <string>
#include <vector>

using namespace std;

//최대공약수
int gcd(int a, int b) {
	int gcd = 0;
	int less_than = a < b ? a : b;
	for (int i = 1; i < less_than + 1; i++) {
		if (a%i == 0 && b%i == 0) {
			gcd = i;
		}
	}
	return gcd;
}

//최소공배수
int lcm(int a, int b) {
	int g = gcd(a, b);
	if (g == 1) {
		return a * b;
	}

	return a*b/g;
}

vector<int> solution(int n, int m) {
	vector<int> answer;
	answer.push_back(gcd(n, m));
	answer.push_back(lcm(n, m));
	return answer;
}
