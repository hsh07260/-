//Programmers 소수 찾기 문항
//solution_basic == 1~n까지 수들을 약수가 2개인지를 확인하여 소수를 찾으니 시간초과로 실패
//solution_eratosthenes == 소수 검사시 "에라토스테네스의 체 알고리즘" 을 적용하여 푸는 것이 가장 효율적이라고 함.
//"에라토스테네스의 체" => 배수가 되는 값들을 먼저 체크하여 소수에서 제외시킨다.
// 이후 비교에서는 이미 제외된 값들을 넘기고, 남은 수들 중에 계속적으로 배수가 되는 값들을 체크하여 제외시킨다.

#include <string>
#include <vector>

using namespace std;

int solution_basic(int n) {
	int answer = 0;

	for (int i = 1; i < n + 1; i++) {
		int cnt=0;
		for (int j = 1; j < i + 1; j++) {
			if (cnt > 2) {
				break;
			}
			if (i % j == 0) {
				cnt++;
			} 
		}
		if (cnt == 2) {
			answer++;
		}
	}
	return answer;
}

int solution_eratosthenes(int n) {
	int answer = 0;
	vector<bool> check(n+1,false); //인덱스 값과 수들을 맞추기 위해 n까지의 인덱스를 갖도록 vector 생성
	check[0] = check[1]=true;

	//소수가 아닌 값들을 true로 check
	for (int i = 2; i < n + 1; i++) {
		for (int j = i+i; j < n + 1; j = j + i) {
			if(check[j]==false){
				check[j] = true;
			}
		}
	}
	for (int i = 0; i < n + 1; i++) {
		if (check[i] == false) {
			answer++;
		}
	}
	return answer;
}

int main() {
	solution_eratosthenes(10);
	return 0;
}
