#include <iostream>
using namespace std;

int durationMain();
int printLocalTime() ;
//int printExecutionTime() { return 0; };

bool menu(int& cmd) {
	while (true) {
		cout << "0. ���α׷��� ����" << endl;
		cout << "1. time_point ���� " << endl;
		cout << "2. duration ���� " << endl;
		cout << "3. ���� �ð� ���� " << endl;
		cout << "���� ������ �����ϼ���. >> " ;
		cin >> cmd;
		if (0 <= cmd && cmd <= 4) break;
		cout << "����� �����ϼ���. " << endl;
	}
	if (cmd == 0) return false;
	return true;
}

int main() {
	int cmd;
	cout << "���α׷��� �����մϴ�. " << endl;
	bool isContinue = true;
	while (isContinue) {
		isContinue = menu(cmd);
		switch (cmd) {
		case 0: cout << "���α׷��� �����մϴ�. " << endl; break;
		case 1: printLocalTime(); break;
		case 2: durationMain(); break;
		//case 3: printExecutionTime(); break;
		default: break;
		}
	}
}