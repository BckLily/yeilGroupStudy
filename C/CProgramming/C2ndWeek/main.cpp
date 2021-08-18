#include <stdio.h>
#include <stdlib.h>

void GetName();
int Add(int, int);

int BigNumber(int, int);
int IsEven(int);
int Abs(int);
int MultiThree(int);
char* ReverseNumber(int);

int main(void) {


	printf("\n1. 두 수를 입력하여 더 큰 수를 출력\n");
	// 두 수를 입력
	int num1 = 0, num2 = 0;

	scanf(" %d %d", &num1, &num2);
	// BigNumber라는 함수에 두 수를 매개변수로 넘겨준다.
	printf("큰 수: %d\n", BigNumber(num1, num2));
	// BigNumber라는 함수 내에서 처리한 결과값을 받아서 출력한다.


	printf("\n2. 입력한 값이 짝수인지 홀수인지 판별: ");
	int num3 = 0;

	scanf(" %d", &num3);
	if (IsEven(num3) == 1) {
		printf("짝수입니다.\n");
	}
	else {
		printf("홀수입니다.\n");
	}


	printf("\n3. 입력한 값의 절대값을 출력\n");
	int num4 = 0;

	scanf(" %d", &num4);

	printf("절대값: %d\n", Abs(num4));


	printf("\n4. 1~입력받은 수까지 3의 배수를 판별하는 함수를 만들고 3의 배수를 모두 출력.\n");
	int num5 = 0;
	
	scanf(" %d", &num5);

	for (int i = 1; i <= num5; i++) {
		if (MultiThree(i)) {
			printf("%d ", i);
		}
	}
	printf("\n");


	printf("\n5. 입력받은 수를 거꾸로 출력하는 함수 작성.\n");
	int num6 = 0;

	scanf(" %d", &num6);

	printf("뒤집은 수: %s\n", ReverseNumber(num6));



	system("pause");

	return 0;
}

void GetName() {
	char name[20] = "";

	printf("\n이름을 입력: ");
	scanf(" %s", name);

	printf("%s\n", name);

}

int Add(int a, int b) {
	return a + b;
}

int BigNumber(int num1 , int num2)
{
	// num1 > num2 인가? num1반환 : num2반환;
	return num1 > num2 ? num1 : num2;
}

int IsEven(int number)
{
	return number % 2 == 0 ? 1 : 0;
}

int Abs(int number)
{
	return number >= 0 ? number : -number;
}

int MultiThree(int number)
{
	if (number % 3 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

char* ReverseNumber(int number)
{
	int size = 0;
	int useNumber = number;

	for (; useNumber > 0; size++) {
		useNumber /= 10;
	}

	char* result = (char*)malloc(sizeof(char) * (size + 1));
	
	for (int i = 0; i < _msize(result); i++) {
		*(result + i) = '\0';
	}

	for (int i = 0; number > 0; i++) {
		*(result + i) = (number % 10) + '0';
		number /= 10;
	}

	return result;
}


