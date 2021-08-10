#include <iostream>
#include "ConsoleColorChange.h"


//int main(void) {
//	FontColorChange(GREEN);
//	std::cout << "두 정수가 주어졌을 때 A와 B를 비교하는 프로그램 작성." << std::endl;
//	FontColorChange(WHITE);
//
//	int A = 0, B = 0;
//
//	std::cin >> A >> B;
//
//	std::cout << ((A > B) ? ">" : (A == B) ? "==" : "<");
//
//	return 0;
//}

//int main(void) {
//	FontColorChange(GREEN);
//	std::cout << "알람을 45분 빨리 맞춘다. 일어나고 싶은 시간이 있을 때 알람을 몇 분으로 맞춰야 하는가?" << std::endl;
//	FontColorChange(WHITE);
//
//	int h;
//	int m;
//
//	std::cin >> h >> m;
//
//	(m -= 45) < 0 ? m += 60, ((h -= 1) < 0 ? h += 24 : h) : m;
//
//	std::cout << h << " " << m;
//
//	return 0;
//}


//int main(void) {
//	FontColorChange(GREEN);
//	std::cout << "A + B 출력하는 프로그램, 마지막 입력은 0 0" << std::endl;
//	FontColorChange(WHITE);
//
//	int A = 0, B = 0;
//
//	// 이게 되네...
//	while (std::cin >> A >> B, A != 0 && B != 0) {
//		std::cout << A + B << std::endl;
//	}
//
//	return 0;
//}


//
//int main(void) {
//	FontColorChange(GREEN);
//	std::cout << "0~99까지의 수가 주어졌을 때 10보다 작으면 앞에 0을 붙여서 두 자리 수로 만들고\
//				각 자리의 숫자를 더한다. 그 다음 오른쪽 자리의 수와 앞에서 구한 합의 오른쪽 자리 수를 붙이면 새로운 수를 만들 수 있다.\
//				숫자 N이 주어졌을 때 위 방법으로 수를 만들어서 다시 N으로 이 만들어지는 사이클을 구하는 프로그램을 작성\n";
//	FontColorChange(WHITE);
//
//	int input; // 입력한 숫자.
//	int currNum; // 현재 숫자
//	int calcNum; // 자릿수 더한 숫자
//	int nextNum; // 다음 숫자
//	int count=1; // 사이클 카운트.
//
//	for (std::cin >> input, currNum = input; calcNum = (currNum / 10) + (currNum % 10), nextNum = ((currNum % 10) * 10) + (calcNum % 10), input != nextNum; count++) {
//		currNum = nextNum;
//	}
//
//	std::cout << count;
//	
//
//	return 0;
//}


int main(void) {
	FontColorChange(GREEN);
	std::cout << "정수 N개로 이루어진 수열 A와 정수 X가 주어진다. A에서 X보다 작은 수를 모두 출력하는 프로그램 작성" << std::endl;
	FontColorChange(WHITE);

	int A[10000];
	int N;
	int X;


	std::cin >> N >> X;

	for (int i = 0; i < N; i++) {
		std::cin >> A[i];
	}

	for (int i = 0; i < N; i++) {
		if (A[i] < X) {
			std::cout << A[i] << " ";
		}
	}
	


	return 0;
}

