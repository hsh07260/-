//Programers 모의고사 문항
//완전탐색 관련 문제

#include <string>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> solution(vector<int> answers) {
	vector<int> answer;
	int answers_sz = answers.size(); //문제의 개수
	int max; // 가장 많이 맞춘학생의 문제수
	//수포자 학생들의 정답패턴
	vector<int> p1 = { 1,2,3,4,5 };
	vector<int> p2 = { 2,1,2,3,2,4,2,5 };
	vector<int> p3 = { 3,3,1,1,2,2,4,4,5,5 };

	vector<int> p_num(3,0); //학생들의 문제 수를 체크하기위한 vector

	//반복문을 통해 수포자 3명 패턴에 따른 개별 채점. keypoint!
	for (int i = 0; i < answers_sz; i++) {
		if (p1[i % 5] == answers[i]) p_num[0]++;
		if (p2[i % 8] == answers[i]) p_num[1]++;
		if (p3[i % 10] == answers[i]) p_num[2]++;
	} 
	
	max = *max_element(p_num.begin(), p_num.end()); //가장 많이 맞춘 문제수 찾기
	//가장 높은 정답 수로 일치하는 학생을 오름차순으로 찾기
	for (int i = 0; i < 3; i++) {
		if (p_num[i] == max) answer.push_back(i+1);
	}

	return answer;
}
