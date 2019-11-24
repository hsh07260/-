// Programers 같은 숫자는 싫어 문항
// solution_erase == 정확성의 테스트 케이스는 통과했지만, 효율성에서 걸림
// solution_empty_vector == 빈 vector에 비교값은 그냥 넣어주고, 같은 수로 카운팅되는 것들은 건너뛴다.
// vector 상에서 erase 시키고, 다시 vector를 만들어주는 행위는 overhead가 크다.

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution_erase(vector<int> arr)
{
	vector<int> answer;
	vector<int> tmp;
	//비교할 숫자 선정
	int arr_sz = arr.size();
	for (int i = 0; i < arr_sz; i++) {
		int cmp = arr[i];
		int cnt = 0;
		//선정된 숫자 반복 수 카운팅
		for (int j = i + 1; j < arr_sz; j++) {
			if (cmp == arr[j]) {
				cnt++;
			}
			else {
				break;
			}
		}

		//카운팅된 숫자만큼 erase
		arr.erase(arr.begin() + i + 1, arr.begin() + i + cnt + 1);
		arr_sz = arr.size();
		
	}

	answer = arr;
	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "Hello Cpp" << endl;

	return answer;
}

vector<int> solution_empty_vector(vector<int> arr)
{
	vector<int> answer;

	int arr_sz = arr.size();
	int cnt = 1;

	//같은 것으로 카운팅된 값들은 넘어가며 비교수로 지정
	for (int i = 0; i < arr_sz; i= i + cnt) {
		int cmp = arr[i];
		cnt = 1;
		//비교수와 같은 것의 개수를 카운팅
		while(cmp == arr[i+cnt]){
			cnt++;
		}
		//비교수를 빈 vector에 조건없이 push
		answer.push_back(cmp);
	}

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "Hello Cpp" << endl;

	return answer;
}
