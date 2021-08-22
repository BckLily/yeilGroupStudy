#include <iostream>
#include "ConsoleColorChange.h"

//int main(void) {
//
//	FontColorChange(GREEN);
//	std::cout << "초를 입력 받은 다음 [시, 분, 초]로 출력" << std::endl;
//	FontColorChange(WHITE);
//	int sec;
//	int min;
//	int hour;
//
//	// 초 입력.
//	std::cin >> sec;
//
//	// 분에 초를 60으로 나눈 몫을 대입
//	min = sec / 60;
//	// 초를 60으로 나눈 나머지를 대입
//	sec %= 60;
//
//	hour = min / 60;
//	min %= 60;
//
//	std::cout << "[h:" << hour << ", m:" << min << ", s:" << sec << "]" << std::endl;
//
//	return 0;
//}

//int main(void) {
//	FontColorChange(GREEN);
//	printf("초를 입력 받은 다음 [시, 분, 초]로 출력\n");
//	FontColorChange(WHITE);
//
//	int sec;
//	int min;
//	int hour;
//
//	scanf_s(" %d", &sec);
//
//	min = sec / 60;
//	sec %= 60;
//	hour = min / 60;
//	min %= 60;
//	printf("[h:%d, m:%d, s:%d]\n", hour, min, sec);
//
//
//	return 0;
//}


//int main(void) {
//	FontColorChange(GREEN);
//	std::cout << "키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램을 작성한다. 정수 사칙연산만 입력." << std::endl;
//	FontColorChange(WHITE);
//
//
//	int a;
//	char calc;
//	int b;
//	int c;
//
//	std::cin >> a >> calc >> b;
//
	//switch (calc) {
	//case '+':
	//	c = a + b;
	//	break;
	//case '-':
	//	c = a - b;
	//	break;
	//case '*':
	//	c = a * b;
	//	break;
	//case '/':
	//	c = a / b;
	//	break;
	//default:
	//	break;
	//}
//
//	std::cout << a << calc << b << "=" << c << std::endl;
//
//	return 0;
//}

//
//int main(void) {
//	FontColorChange(GREEN);
//	printf("키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램을 작성한다. 정수 사칙연산만 입력.\n");
//	FontColorChange(WHITE);
//
//	int a;
//	char calc;
//	int b;
//	int c;
//
//	scanf_s(" %d", &a);
//	scanf_s(" %c", &calc);
//	scanf_s(" %d", &b);
//
//	switch (calc) {
//	case '+':
//		c = a + b;
//		break;
//	case '-':
//		c = a - b;
//		break;
//	case '*':
//		c = a * b;
//		break;
//	case '/':
//		c = a / b;
//		break;
//	default:
//
//		break;
//	}
//
//	printf("%d%c%d=%d", a, calc, b, c);
//
//
//	return 0;
//}


//
//int main(void) {
//	FontColorChange(GREEN);
//	std::cout << "두 수 입력했을 때 최대 공약수 구하는 프로그램" << std::endl;
//	FontColorChange(WHITE);
//
//	int num1 = 0, num2 = 0;
//
//	std::cin >> num1 >> num2;
//
//	int max = 0;
//
//	for (int i = 1; i <= ((num1 < num2) ? num1 : num2); i++) {
//		std::cout << i << std::endl;
//		if (!(num1 % i) && !(num2 % i)) {
//			max = i;
//		}
//	}
//
//	std::cout << "max: " << max;
//
//}

//
//int main(void) {
//	FontColorChange(GREEN);
//	std::cout << "프로그램 사용자로부터 숫자 N입력 받아서 2^k <= N을 만족하는 k의 최댓값을 구하는 프로그램" << std::endl;
//	FontColorChange(WHITE);
//
//	int N;
//
//	std::cin >> N;
//
//	int count = 0;
//	if (N >= 1) {
//		for (int num = 2; num <= N; count++, num <<= 1) {
//			std::cout << num << std::endl;
//		}
//	}
//	else if (N > 0) {
//		for (int num = 0; num > N; ++count, num >>= 1) {
//			std::cout << num << std::endl;
//		}
//	}
//	std::cout << "Count: " << count << std::endl;
//
//	return 0;
//}


//int main(void) {
//	FontColorChange(GREEN);
//	std::cout << "프로그램 사용자로부터 숫자 N입력 받아서 2^k <= N을 만족하는 k의 최댓값을 구하는 프로그램" << std::endl;
//	FontColorChange(WHITE);
//
//	float N;
//
//	std::cin >> N;
//
//	int count = 0;
//	if (N >= 1) {
//		for (float num = 2; num <= N; count++, num *=2) {
//			std::cout << num << std::endl;
//		}
//	}
//	else if (N > 0) {
//		for (float num = 1; num > N; --count, num /= 2) {
//			std::cout << num << std::endl;
//		}
//	}
//
//	std::cout << "Count: " << count << std::endl;
//
//	return 0;
//}



int main(void) {
	FontColorChange(GREEN);
	std::cout << "프로그램 사용자로부터 숫자 N입력 받아서 2^k <= N을 만족하는 k의 최댓값을 구하는 프로그램" << std::endl;
	FontColorChange(WHITE);

	int N;

	scanf(" %d", &N);

	int count = 0;
	if (N >= 1) {
		for (int num = 2; num <= N; count++, num <<= 1) {
			std::cout << num << std::endl;
		}
	}
	else if (N > 0) {
		for (int num = 0; num > N; ++count, num >>= 1) {
			std::cout << num << std::endl;
		}
	}
	//std::cout << "Count: " << count << std::endl;
	printf("count: %d", count);

	return 0;
}

