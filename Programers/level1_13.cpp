// Programers 2016년 문항
// 요일이 7로 반복된다는 것으로 쉽게 접근 가능

#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    //월별 일수
	vector<int> month_days = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    //1일(index)과 금요일 맞추기
	vector<string> days = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"}; 
	//해당 월일까지의 총 일 수 계산
    int total_day = 0;
	string answer = "";
	for (int i = 0; i < a-1; i++) {
		total_day += month_days[i];
	}
	total_day += b;
	total_day = total_day % 7;

	answer = days[total_day];

	return answer;
}
