#include <iostream>
#include "ConsoleColorChange.h"

int main(void) {

	int Arr[10];

	printf("1. int Arr[10] 배열을 선언하고 10, 17, 3, 9, 37, 10, 8, 9, 13, 21 값을 넣어라\n\n");

	for (int i = 0; i < 10; i++) {
		scanf(" %d", &Arr[i]);
	}

	printf("Arr: ");

	for (int i = 0; i < 10; i++) {
		printf("%d ", Arr[i]);
	}

	printf("\n\n2. 배열 Arr에 들어있는 값을 int Invert_Arr[10] 배열에 거꾸로 넣어라\n\n");

	int Invert_Arr[10];

	for (int i = 0; i < 10; i++) {
		Invert_Arr[i] = Arr[10 - 1 - i];
	}

	printf("Arr: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", Arr[i]);
	}
	printf("\nInvert_Arr: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", Invert_Arr[i]);
	}

	printf("\n\n3. 배열 Arr의 홀수 번째 원소 값에 합계와 짝수 번째 원소 값의 합계를 구하라.\n\n");

	printf("홀수 번 원소 합: ");
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 1) {
			continue;
		}
		sum += Arr[i];
		printf("%d ", Arr[i]);
	}
	printf(" >> %d\n\n", sum);

	printf("짝수 번 원소 합: ");
	sum = 0;
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			continue;
		}
		sum += Arr[i];
		printf("%d ", Arr[i]);
	}
	printf(" >> %d\n\n", sum);

	printf("\n\n4. 배열 Arr에 들어있는 값을 int Sort_Arr[10] 배열을 만들어서 내림차순으로 정렬하라\n\n");
	int Sort_Arr[10];

	for (int i = 0; i < 10; i++) {
		Sort_Arr[i] = Arr[i];
	}

	//for (int i = 0; i < 10; i++) {

	//	for (int j = 0; j < 10; j++) {
	//		if (i != j && Sort_Arr[i] > Sort_Arr[j]) {
	//			int temp = Sort_Arr[i];
	//			Sort_Arr[i] = Sort_Arr[j];
	//			Sort_Arr[j] = temp;
	//			break;
	//		}
	//	}
	//}
	for (int i = 0; i < 10 - 1; i++) {
		int maxIdx = i;
		for (int j = i + 1; j < 10; j++) {
			if (Sort_Arr[maxIdx] < Sort_Arr[j]) {
				maxIdx = j;
			}
		}
		if (maxIdx != i) {
			int temp = Sort_Arr[i];
			Sort_Arr[i] = Sort_Arr[maxIdx];
			Sort_Arr[maxIdx] = temp;
		}
	}

	printf("\n\n정렬: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", Sort_Arr[i]);
	}


	printf("\n\n문1. 3, 29, 38, 12, 57, 74, 40, 85, 61, 1 가 있을 때 가장 큰 숫자와 위치를 출력하라\n\n");
	int arr1[10] = { 3, 29, 38, 12, 57, 74, 40, 85, 61, 1 };
	int q1_max = arr1[0];
	int q1_idx = 0;
	for (int i = 1; i < 10; i++) {
		if (q1_max < arr1[i]) {
			q1_max = arr1[i];
			q1_idx = i;
		}
	}
	printf("%d %d\n\n", q1_max, q1_idx);


	printf("키보드로 문장을 입력받은 후 대문자를 찾아 소문자로 바꾸는 프로그램을 작성\n\n");
	char arr2[20];

	scanf(" %[^\n]s", arr2);
	for (int i = 0; arr2[i] != '\0'; i++) {
		if (arr2[i] >= 'A' && arr2[i] <= 'Z') {
			arr2[i] -= 'A' - 'a';
		}
	}
	printf("출력: %s", arr2);


	printf("\n\n문3. 100이상 1000이하의 3개의 자연수를 입력하고 세 수 A, B, C를 곱한다.\
			A * B * C의 결과 D에 0부터 9까지의 숫자가 각각 몇 번 사용되었는지 구하는 프로그램을 작성\n\n");
	int A, B, C;
	printf("세 수의 입력: ");
	scanf(" %d %d %d", &A, &B, &C);

	int D = A * B * C;
	int q3_arr[10] = { 0 };

	printf("D: %d\n", D);

	for (; D > 0; D /= 10) {
		int num = D % 10;
		q3_arr[num]++;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
	}

	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", q3_arr[i]);
	}


	return 0;
}

