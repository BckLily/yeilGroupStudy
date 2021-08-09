#include <iostream>
#include "ConsoleColorChange.h"


//int main(void) {
//
//
//	////////////////////////////////
//	// while문
//	////////////////////////////////
//
//	/*
//	10~20 사이 숫자 입력,
//	1부터 입력 받은 숫자 사이 값 출력.
//	*/
//
//	printf("\n10~20 사이 숫자 입력, 1부터 입력 받은 숫자 사이 값 출력.\n");
//
//	int input;
//	while (1) {
//		scanf(" %d", &input);
//		if (10 <= input && input <= 20) {
//			break; 
//		}
//		else { printf("잘못된 입력입니다\n"); }
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
//	//	else { printf("   잘못된 입력입니다\n"); }
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
//	while을 사용해서 Hello 5번 출력
//	*/
//	printf("\nwhile을 사용해서 Hello 5번 출력\n");
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
//	정수를 반복하여 입력받아 누적 합계, 0입력시 while 종료.
//	*/
//	
//	printf("\n정수를 반복하여 입력받아 누적 합계, 0입력시 while 종료.\n");
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
//	입력된 수가 소수인지 판단하는 코드 작성.
//	prime number
//	*/
//
//	printf("\n입력된 수가 소수인지 판단하는 코드 작성.\n");
//
//	i = 2;
//
//	while (1) {
//		scanf(" %d", &input);
//		if (input < i) { printf("잘못된 입력입니다"); }
//		else { break; }
//	}
//
//	while (i <= input) {
//
//		if (input == 2) { printf("입력한 수는 소수입니다.\n"); break; }
//
//		if (input % i == 0) { printf("입력한 수는 소수가 아닙니다.\n"); break; }
//		else if (i == input - 1) { printf("입력한 수는 소수입니다.\n"); break; }
//
//		i++;
//	}
//	/*
//	while(temp < input){
//	if(input % temp == 0){
//	printf("소수 아님");
//	break;
//	}
//	temp++;
//	}
//	if(input <= 1){
//	printf("1 이상만 가능");
//	}
//	else if(temp == input){
//	printf("소수");
//	}
//	*/
//
//
//	/*
//	입력한 수 반대로 출력.
//	*/
//
//	printf("\n입력한 수 반대로 출력\n");
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
//	입력한 수의 각 자릿수의 합계를 구하라
//	*/
//
//	printf("\n입력한 수의 각 자릿수의 합계를 구하라\n");
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
//	// for문
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
//	//// ASCII 관련...
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

	ConsoleWindowSize();	//	콘솔 창 크기 변경

	FontColorChange(GREEN); // 글자 색 변경
	printf("4) 첫 날 1원을 예금하고, 다음날부터 전날의 2배씩 예금하는 방식으로 한 달(30일) 동안 저축한 금액은?\n");
	FontColorChange(WHITE); // 글자 색 변경

	int save = 1; // 저축할 금액
	int sum = 0; // 저축한 금액

	for (int i = 0; i < 30; i++, save *= 2) {
		sum += save;
	}

	std::cout << sum + "원";

	return 0;
}
*/
/*
int main(void) {
	ConsoleWindowSize();

	FontColorChange(GREEN);
	printf("5) 1~1000까지의 누적 합계를 구하라. 단 3의 배수는 제외하며, 3과 5의 공배수는 제외하지 않는다.\n");
	FontColorChange(WHITE);

	int sum = 0;
	// 1~1000까지
	for (int i = 1; i <= 1000; i++) {
		// i가 3의 배수이고 5의 배수가 아닐 때 (공배수 제외)
		if (i % 3 == 0 && i % 5 != 0) {
			// 뒷 부분 건너뛰고 증감문으로 이동.
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
	std::cout << "6) 1부터 시작하여 홀수의 합을 구하면서, 그 합이 10000을 넘기 직전의 i의 수를 구하시오.\n";
	FontColorChange(WHITE);

	
	int sum = 0; // 합계를 저장할 변수
	int i = 1; // 증가할 카운트 변수

	// 반복을 하면서 매번 i를 1증가시킨다.
	for (; ; i++) {
		// i가 홀수일 경우 sum에 i값을 더한다.
		if (i % 2 == 1) { sum += i; }
		// sum이 10000을 넘는 경우
		if (sum > 10000) {
			// sum에서 현재 i값을 빼고
			sum -= i;
			// i에서 2를 빼서 이전 홀수 값으로 만든다.
			i -= 2;
			break;
		}
	}
	// 출력
	std::cout << "i: " + std::to_string(i) + " sum: " + std::to_string(sum);


	return 0;
}
*/

int main(void) {
	ConsoleWindowSize();

	float start = clock();


	FontColorChange(GREEN);
	std::cout << "# 실행파일과 같이 구구단을 출력하시오. (다중 for문)\n";
	FontColorChange(WHITE);

	for (int i = 2; i <= 9; i++) {
		// 좌측 정렬
		std::cout.setf(std::ios::left);
		// 출력 폭 지정
		std::cout.width(16);
		// 출력
		std::cout << "==== " + std::to_string(i) + "단 ====";
		// 빈 공간을 무엇으로 채울지 설정.
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
