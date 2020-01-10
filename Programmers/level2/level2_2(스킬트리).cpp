//Programmers 스킬트리 문항

#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	for (int i = 0; i < skill_trees.size(); i++) {
		int check = 0;
		string tmp = skill_trees[i];
		for (int j = 0; j < tmp.size(); j++) {
			//skill_trees의 현재 문자가 skill 문자열 내에 있는 문자인지 확인
			if (skill.find(tmp[j],0) != string::npos) {
				//skill의 문자열의 순서와 맞는 문자인지 확인
				if(tmp[j] == skill[check]){
					check++;
				}
				else {
					break;
				}
			}
      //정상적으로 비교가 끝났다면 answer를 ++;
			if (j == tmp.size() - 1) answer++;
		}
	}
		return answer;
}
