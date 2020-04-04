#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	queue<int> pq;
	int idx = 0;
	while (pq.size() != priorities.size()) {
		int max_value = *max_element(priorities.begin(), priorities.end());
 		if(priorities[idx%priorities.size()] == max_value){
			pq.push(idx%priorities.size());
			priorities[idx%priorities.size()] = 0;
		}
		idx++;
	}
		
	while (!pq.empty()) {
		answer++;
		if(pq.front() == location){
			return answer;
		}
		pq.pop();
	}
	return answer;
}
