// Programmers 크레인 인형뽑기 게임 문항
// 주어지는 N*N board 배열을 N개의 stack처럼 생각

#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	stack<int> st;
	//열마다 제일 위에 있는 값의 높이(행)
	vector<int> top(board.size(), board.size());

	//i는 열 j는 행
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board.size(); j++) {
			if (board[j][i] != 0) {
				top[i] = j;
				break;
			}
		}
	}

	for (int i = 0; i < moves.size(); i++) {
		int col = moves[i]-1;
		if (top[col] != board.size()) {
			if(st.empty() || st.top() != board[top[col]][col]){ st.push(board[top[col]][col]); }
			else {
				st.pop();
				answer += 2;
			}
			board[top[col]][col] = 0;
			top[col]++;
		}
	}
	return answer;
}
