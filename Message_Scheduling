#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int message_num;  //메세지 수
	int consum_num;// 컨수머 수

	cin >> message_num >> consum_num;
	
	vector<int>message(message_num);
	vector<int>consum(consum_num);
	vector<int>time(consum_num);

	for (int i = 0; i < message_num; i++){
		cin >> message[i];
	}
	for (int i = 0; i < consum_num; i++) {
		consum[i] = message[i];
		time[i] = message[i];
	}
	for (int i = consum_num; i < message_num; i++) {
		int min_idx = min_element(consum.begin(), consum.end()) - consum.begin();
		time[min_idx] += message[i];
		consum[min_idx] = message[i];

	}
	cout << *max_element(time.begin(), time.end()) << endl;
	return 0;
}

