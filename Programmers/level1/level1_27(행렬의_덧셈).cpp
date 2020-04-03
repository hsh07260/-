// Programmers 행렬의 덧셈 문항
// vector 에 대한 개념을 필요로 함
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector<vector<int>> answer;
    for(int i=0;i<arr1.size();i++){
        vector<int>tmp;
        for(int j=0;j<arr1[i].size();j++){
            tmp.push_back(arr1[i][j]+arr2[i][j]);
        }
        answer.push_back(tmp);
        
    }
	return answer;
}
