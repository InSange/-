#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>

using namespace std;
using namespace chrono;

int durationMain() {
	//Specify a duration where each tick is 60 seconds
	duration<long, ratio<60>> d1(123);
	cout << d1.count() << endl;

	duration<double> d2;
	d2 = d2.max();
	cout << "duration<double> d2.max().count() = " << d2.count() << endl;

	duration<long, ratio<60>> d3(10);	// = 10 minutes
	duration<long, ratio<1>> d4(14);	// = 14 seconds

	//Compare both durations

	if (d3 > d4)
		cout << "d3 > d4" << endl;
	else
		cout << "d3 <= d4" << endl;
	//Increment d4 with 1 resulting in 15 seconds
	++d4;
	//Multiply d4 by 2 resulting in 30 seconds
	d4 *= 2;
	//�� ���� duration�� ���ϰ� �д��� duration�� ����
	duration<double, ratio<60>> d5 = d3 + d4;
	//�� ���� duration�� ���ؼ� �ʴ��� duration�� ����
	duration<long, ratio<1>> d6 = d3 + d4;
	cout << d3.count() << "minutes + " << d4.count() << "seconds = " << d5.count() << " minutes or " << d6.count() << "seconds" << endl;
	//30��¥�� duration�� �����Ѵ�
	duration<long>d7(30);
	//d7�� �� ���� ���� �� ���� duration���� ��ȯ
	duration<double, ratio<60>> d8(d7);
	cout << d7.count() << "seconds = " << d8.count() << " minutes " << endl;
	//Use predefined durations
	auto t = hours(1) + minutes(23) + seconds(45);

	cout << seconds(1).count() << " seconds " << endl;
	return 0;
}