#include <iostream>
using namespace std;

int durationMain();
int printLocalTime() ;
//int printExecutionTime() { return 0; };

bool menu(int& cmd) {
	while (true) {
		cout << "0. 프로그램의 종료" << endl;
		cout << "1. time_point 시험 " << endl;
		cout << "2. duration 시험 " << endl;
		cout << "3. 실행 시간 시험 " << endl;
		cout << "실행 종류를 선택하세요. >> " ;
		cin >> cmd;
		if (0 <= cmd && cmd <= 4) break;
		cout << "명령을 선택하세요. " << endl;
	}
	if (cmd == 0) return false;
	return true;
}

int main() {
	int cmd;
	cout << "프로그램을 시작합니다. " << endl;
	bool isContinue = true;
	while (isContinue) {
		isContinue = menu(cmd);
		switch (cmd) {
		case 0: cout << "프로그램을 종료합니다. " << endl; break;
		case 1: printLocalTime(); break;
		case 2: durationMain(); break;
		//case 3: printExecutionTime(); break;
		default: break;
		}
	}
}