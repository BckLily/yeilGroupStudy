#include <iostream>
#include "ConsoleColorChange.h"

//int main(void) {
//
//	FontColorChange(GREEN);
//	std::cout << "�ʸ� �Է� ���� ���� [��, ��, ��]�� ���" << std::endl;
//	FontColorChange(WHITE);
//	int sec;
//	int min;
//	int hour;
//
//	// �� �Է�.
//	std::cin >> sec;
//
//	// �п� �ʸ� 60���� ���� ���� ����
//	min = sec / 60;
//	// �ʸ� 60���� ���� �������� ����
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
//	printf("�ʸ� �Է� ���� ���� [��, ��, ��]�� ���\n");
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
//	std::cout << "Ű����� ������ �Է��ϸ� ��� ����� ����ϴ� ���α׷��� �ۼ��Ѵ�. ���� ��Ģ���길 �Է�." << std::endl;
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
//	printf("Ű����� ������ �Է��ϸ� ��� ����� ����ϴ� ���α׷��� �ۼ��Ѵ�. ���� ��Ģ���길 �Է�.\n");
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
//	std::cout << "�� �� �Է����� �� �ִ� ����� ���ϴ� ���α׷�" << std::endl;
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
//	std::cout << "���α׷� ����ڷκ��� ���� N�Է� �޾Ƽ� 2^k <= N�� �����ϴ� k�� �ִ��� ���ϴ� ���α׷�" << std::endl;
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
//	std::cout << "���α׷� ����ڷκ��� ���� N�Է� �޾Ƽ� 2^k <= N�� �����ϴ� k�� �ִ��� ���ϴ� ���α׷�" << std::endl;
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
	std::cout << "���α׷� ����ڷκ��� ���� N�Է� �޾Ƽ� 2^k <= N�� �����ϴ� k�� �ִ��� ���ϴ� ���α׷�" << std::endl;
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

