#include <iostream>
#include "ConsoleColorChange.h"


//int main(void) {
//	FontColorChange(GREEN);
//	std::cout << "�� ������ �־����� �� A�� B�� ���ϴ� ���α׷� �ۼ�." << std::endl;
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
//	std::cout << "�˶��� 45�� ���� �����. �Ͼ�� ���� �ð��� ���� �� �˶��� �� ������ ����� �ϴ°�?" << std::endl;
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
//	std::cout << "A + B ����ϴ� ���α׷�, ������ �Է��� 0 0" << std::endl;
//	FontColorChange(WHITE);
//
//	int A = 0, B = 0;
//
//	// �̰� �ǳ�...
//	while (std::cin >> A >> B, A != 0 && B != 0) {
//		std::cout << A + B << std::endl;
//	}
//
//	return 0;
//}


//
//int main(void) {
//	FontColorChange(GREEN);
//	std::cout << "0~99������ ���� �־����� �� 10���� ������ �տ� 0�� �ٿ��� �� �ڸ� ���� �����\
//				�� �ڸ��� ���ڸ� ���Ѵ�. �� ���� ������ �ڸ��� ���� �տ��� ���� ���� ������ �ڸ� ���� ���̸� ���ο� ���� ���� �� �ִ�.\
//				���� N�� �־����� �� �� ������� ���� ���� �ٽ� N���� �� ��������� ����Ŭ�� ���ϴ� ���α׷��� �ۼ�\n";
//	FontColorChange(WHITE);
//
//	int input; // �Է��� ����.
//	int currNum; // ���� ����
//	int calcNum; // �ڸ��� ���� ����
//	int nextNum; // ���� ����
//	int count=1; // ����Ŭ ī��Ʈ.
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
	std::cout << "���� N���� �̷���� ���� A�� ���� X�� �־�����. A���� X���� ���� ���� ��� ����ϴ� ���α׷� �ۼ�" << std::endl;
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

