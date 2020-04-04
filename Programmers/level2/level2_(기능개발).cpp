#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	while(!progresses.empty()){ 
		for (int i = 0; i < progresses.size(); i++) {
			if (progresses[i] < 100) {
				progresses[i] += speeds[i];
			}
		}
		int a = 0;
		while(!progresses.empty() && progresses[0] >= 100) {
			progresses.erase(progresses.begin());
			speeds.erase(speeds.begin());
			a++;
		}
		if (a) { answer.push_back(a); }
	}
	
	return answer;
}
