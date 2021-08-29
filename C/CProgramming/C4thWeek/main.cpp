#include <iostream>

void Capital(char*);
void Bigger(int*, int*);
void Total(int, int*);
void SortASC(int*);


int main(void) {
	//std::cout << "이전 코드를 이해한 후 문자열을 입력 받은 후 해당 문자열의 내용을 모두 대문자로 바꾸는 함수를 만드시오." << std::endl;
	std::cout << "1." << std::endl;
	char str[] = "I Don't Know";

	Capital(str);

	std::cout << "str: " << str << std::endl;

	//std::cout << "두 수를 입력 받아 큰 수를 구하시오" << std::endl;
	std::cout << "2." << std::endl;

	int num1, num2;
	std::cin >> num1 >> num2;

	Bigger(&num1, &num2);
	std::cout << "Bigger: " << num1 << std::endl;

	//std::cout << "하나의 숫자를 입력받아 1부터 입력 받은 수 까지의 누적합계를 구하시오" << std::endl;
	std::cout << "3." << std::endl;

	int num3, result=0;

	std::cin >> num3;

	Total(num3, &result);
	std::cout << "Result: " << result << std::endl;

	//std::cout << "임의 수 8개를 int형 배열에 입력 받은 후 오름차순 정렬한 뒤에 출력하시오." << std::endl;
	std::cout << "4." << std::endl;
	int arr[8];

	for (int i = 0; i < 8; i++) {
		std::cin >> arr[i];
	}

	SortASC(arr);

	std::cout << "Result: ";
	for (int i = 0; i < 8; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}

void Capital(char* str) {
	for (int i = 0; *(str + i) != '\0'; i++) {
		if (*(str + i) >= 'a' && *(str + i) <= 'z') {
			*(str + i) += 'A' - 'a';
		}
	}
	return;
}

void Bigger(int* max, int* min) {
	if (*max < *min) {
		int swap = *max;
		*max = *min;
		*min = swap;
	}
}

void Total(int idx, int* result) {
	for (int i = 1; i <= idx; i++) {
		*result += i;
	}
}


void SortASC(int* arr) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[i] < arr[j]) {
				int swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}
}

