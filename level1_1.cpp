// 완주하지 못한 선수
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution_2(vector<string> participant, vector<string> completion) {
	//3개의 테스트케이스 모두 통과후 정확성,효율성 통과
	int participant_sz = participant.size();
	int completion_sz = completion.size();
	string answer = "";
	
	//완주자가 (참가자-1)이기때문에 sorting하여 비교하면 될 것으로 판단.
	//vector를 sorting 후 안맞는 이름을 바로 출력
	//원본 데이터의 손상없이 결과얻기 가능
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());

	for (int i = 0; i < completion_sz; i++) {
		if (participant[i] != completion[i]) {
			answer = participant[i];
			return answer;
		}
	}
	answer = participant[participant_sz-1];
	return answer;
}

string solution_1(vector<string> participant, vector<string> completion) {
	//3개의 테스트 케이스는 통과하지만, 효율성에서 탈락.
	//직관적으로 바로 비교하여 참가자와 완주자가 같으면 완주자 목록에서 제외
	//참가자가 남거나 일치하는 완주자가없으면 결과로 출력
	//(vector).erase로 인해 원본 데이터 손상생김
	int participant_sz = participant.size();
	string answer = "";


	//for 문을 통해 참가자 한명씩 비교
	for (int i = 0; i < participant_sz; i++) {
		//완주자가 남고 비교할 참가자가 남은경우에 비교
		int completion_sz = completion.size();
		for (int j = 0; j < completion_sz; j++) {
			if (participant[i] == completion[j]) {
				completion.erase(completion.begin() + j);
				break;
			}
			if (j == completion_sz - 1) {
				answer = participant[i];
			}

		}

	}

	return answer;
}

int main() {
	vector<string> participant = {"leo", "kiki", "eden"};
	vector<string> completion = {"eden", "kiki" };//{ "stanko", "ana", "mislav", "mislav"};

	
	cout << solution_2(participant, completion) << endl;
	

	return 0;
}


