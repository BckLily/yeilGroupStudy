#include <iostream>
#include "ConsoleColorChange.h"


//int main(void) {
//
//
//	////////////////////////////////
//	// while��
//	////////////////////////////////
//
//	/*
//	10~20 ���� ���� �Է�,
//	1���� �Է� ���� ���� ���� �� ���.
//	*/
//
//	printf("\n10~20 ���� ���� �Է�, 1���� �Է� ���� ���� ���� �� ���.\n");
//
//	int input;
//	while (1) {
//		scanf(" %d", &input);
//		if (10 <= input && input <= 20) {
//			break; 
//		}
//		else { printf("�߸��� �Է��Դϴ�\n"); }
//	}
//
//	int sum = 0;
//	int i = 1;
//
//	while (i <= input) {
//		sum += i; 
//		i++; // i += 1;
//	}
//
//	printf("%d\n", sum);
//
//
//
//	//int input;
//	//while (1) {
//	//	scanf(" %d", &input);
//	//	if (10 <= input && input <= 20) { break; }
//	//	else { printf("   �߸��� �Է��Դϴ�\n"); }
//	//}
//	//
//	//int sum = 0;
//	//int i = 1;
//
//	//while (i <= input) { sum += i++; }
//
//	//printf("%d\n", sum);
//
//
//	/*
//	while�� ����ؼ� Hello 5�� ���
//	*/
//	printf("\nwhile�� ����ؼ� Hello 5�� ���\n");
//
//	int count = 0;
//
//	while (count++ < 5) {
//		printf("Hello "); 
//	}
//
//	printf("\n");
//
//
//
//	/*int count = 0;
//	while (count++ < 5) { printf("Hello "); }
//	printf("\n");*/
//
//	
//	/*
//	������ �ݺ��Ͽ� �Է¹޾� ���� �հ�, 0�Է½� while ����.
//	*/
//	
//	printf("\n������ �ݺ��Ͽ� �Է¹޾� ���� �հ�, 0�Է½� while ����.\n");
//
//	sum = 0;
//
//	while (1) {
//		scanf(" %d", &input);
//		if (input == 0) { break; }
//		sum += input;
//	} 
//
//	printf("%d\n", sum);
//
//
//	/*
//	�Էµ� ���� �Ҽ����� �Ǵ��ϴ� �ڵ� �ۼ�.
//	prime number
//	*/
//
//	printf("\n�Էµ� ���� �Ҽ����� �Ǵ��ϴ� �ڵ� �ۼ�.\n");
//
//	i = 2;
//
//	while (1) {
//		scanf(" %d", &input);
//		if (input < i) { printf("�߸��� �Է��Դϴ�"); }
//		else { break; }
//	}
//
//	while (i <= input) {
//
//		if (input == 2) { printf("�Է��� ���� �Ҽ��Դϴ�.\n"); break; }
//
//		if (input % i == 0) { printf("�Է��� ���� �Ҽ��� �ƴմϴ�.\n"); break; }
//		else if (i == input - 1) { printf("�Է��� ���� �Ҽ��Դϴ�.\n"); break; }
//
//		i++;
//	}
//	/*
//	while(temp < input){
//	if(input % temp == 0){
//	printf("�Ҽ� �ƴ�");
//	break;
//	}
//	temp++;
//	}
//	if(input <= 1){
//	printf("1 �̻� ����");
//	}
//	else if(temp == input){
//	printf("�Ҽ�");
//	}
//	*/
//
//
//	/*
//	�Է��� �� �ݴ�� ���.
//	*/
//
//	printf("\n�Է��� �� �ݴ�� ���\n");
//
//	scanf(" %d", &input);
//	
//	while (input > 0) {
//		printf("%d", (input % 10));
//		input /= 10;
//	}
//
//
//	/*
//	�Է��� ���� �� �ڸ����� �հ踦 ���϶�
//	*/
//
//	printf("\n�Է��� ���� �� �ڸ����� �հ踦 ���϶�\n");
//
//	scanf(" %d", &input);
//
//	sum = 0;
//
//	while (input > 0) {
//		sum += (input % 10);
//		input /= 10;
//	}
//
//	printf("%d", sum);
//
//
//	////////////////////////////////
//	// for��
//	////////////////////////////////
//
//	//printf("\n1 >>\n");
//	//
//	//for (int i = 1; i <= 9; i++) {
//	//	if (i % 2) { printf("%d.Hello\n", i); }
//	//}
//
//
//
//	//printf("\n2 >>\n");
//
//	//// ASCII ����...
//	//for (char c = 'A'; c <= 'Z'; c++) {
//	//	printf("%c,", c);
//	//	if (c == 'M') { printf("\n"); }
//	//}
//
//	//printf("\n");
//
//
//
//	//printf("\n3 >>\n");
//	//int sum = 0;
//	//int div = 3;
//	//for (int i = 1; i < 10; i++) {
//	//	if (!(i % div)) {
//	//		if (i != div) { printf("+"); }
//	//		printf("%d", i);
//	//		sum += i;
//	//	}
//	//}
//	//printf("=%d", sum);
//
//
//	return 0;
////}

/*
int main(void) {

	ConsoleWindowSize();	//	�ܼ� â ũ�� ����

	FontColorChange(GREEN); // ���� �� ����
	printf("4) ù �� 1���� �����ϰ�, ���������� ������ 2�辿 �����ϴ� ������� �� ��(30��) ���� ������ �ݾ���?\n");
	FontColorChange(WHITE); // ���� �� ����

	int save = 1; // ������ �ݾ�
	int sum = 0; // ������ �ݾ�

	for (int i = 0; i < 30; i++, save *= 2) {
		sum += save;
	}

	std::cout << sum + "��";

	return 0;
}
*/
/*
int main(void) {
	ConsoleWindowSize();

	FontColorChange(GREEN);
	printf("5) 1~1000������ ���� �հ踦 ���϶�. �� 3�� ����� �����ϸ�, 3�� 5�� ������� �������� �ʴ´�.\n");
	FontColorChange(WHITE);

	int sum = 0;
	// 1~1000����
	for (int i = 1; i <= 1000; i++) {
		// i�� 3�� ����̰� 5�� ����� �ƴ� �� (����� ����)
		if (i % 3 == 0 && i % 5 != 0) {
			// �� �κ� �ǳʶٰ� ���������� �̵�.
			continue;
		}
		sum += i;
	}

	std::cout << sum;

	return 0;
}
*/
/*
int main(void) {
	ConsoleWindowSize();

	FontColorChange(GREEN);
	std::cout << "6) 1���� �����Ͽ� Ȧ���� ���� ���ϸ鼭, �� ���� 10000�� �ѱ� ������ i�� ���� ���Ͻÿ�.\n";
	FontColorChange(WHITE);

	
	int sum = 0; // �հ踦 ������ ����
	int i = 1; // ������ ī��Ʈ ����

	// �ݺ��� �ϸ鼭 �Ź� i�� 1������Ų��.
	for (; ; i++) {
		// i�� Ȧ���� ��� sum�� i���� ���Ѵ�.
		if (i % 2 == 1) { sum += i; }
		// sum�� 10000�� �Ѵ� ���
		if (sum > 10000) {
			// sum���� ���� i���� ����
			sum -= i;
			// i���� 2�� ���� ���� Ȧ�� ������ �����.
			i -= 2;
			break;
		}
	}
	// ���
	std::cout << "i: " + std::to_string(i) + " sum: " + std::to_string(sum);


	return 0;
}
*/

int main(void) {
	ConsoleWindowSize();

	float start = clock();


	FontColorChange(GREEN);
	std::cout << "# �������ϰ� ���� �������� ����Ͻÿ�. (���� for��)\n";
	FontColorChange(WHITE);

	for (int i = 2; i <= 9; i++) {
		// ���� ����
		std::cout.setf(std::ios::left);
		// ��� �� ����
		std::cout.width(16);
		// ���
		std::cout << "==== " + std::to_string(i) + "�� ====";
		// �� ������ �������� ä���� ����.
		std::cout.fill(' ');
	}
	std::cout << "\n";
	for (int j = 1; j <= 9; j++) {

		for (int i = 2; i <= 9; i++) {
			std::cout.setf(std::ios::left);
			std::cout.width(16);
			std::cout << std::to_string(i) + " X " + std::to_string(j) + " = " + std::to_string(j * i);
		}
		std::cout << "\n";
	}

	float end = clock();

	std::cout << "time: " << std::to_string(end - start) << "ms";

	return 0;
}
