// Programers K번째수 문항.
// 정렬(sorting)관련 문제
// sorting과 vector의 assign을 통한 복사로 해결
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> temp;
	int commands_sz = commands.size();
	int i, j, k;
	//commands 2차원 배열에서 1개의 배열씩 추출해 arguments로 사용
	for (int a = 0; a < commands_sz; a++) {
		//2차원 배열 commands에서 추출된 i,j,k 
		i = commands[a][0];
		j = commands[a][1];
		k = commands[a][2];

		temp.assign(array.begin()+i-1, array.begin()+j);
		//array의 i번쨰 ~j번째까지 복사된 vector
		//(vector).assign에 대한 이해부족으로 시간이 걸림
		//(vector).assign(i,j)는 i번째"부터" j번째"직전"까지 vetor로 생성 즉 i ~ (j-1)의 원소들
		sort(temp.begin(), temp.end());  //array를 i~j범위로 복사한 temp vector를 sorting
		answer.push_back(temp[k - 1]); //i~j범위로 추출된 vector에서 추출한 k번째 값을 answer에 push
	}

	return answer;


}
