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


	printf("\n1. �� ���� �Է��Ͽ� �� ū ���� ���\n");
	// �� ���� �Է�
	int num1 = 0, num2 = 0;

	scanf(" %d %d", &num1, &num2);
	// BigNumber��� �Լ��� �� ���� �Ű������� �Ѱ��ش�.
	printf("ū ��: %d\n", BigNumber(num1, num2));
	// BigNumber��� �Լ� ������ ó���� ������� �޾Ƽ� ����Ѵ�.


	printf("\n2. �Է��� ���� ¦������ Ȧ������ �Ǻ�: ");
	int num3 = 0;

	scanf(" %d", &num3);
	if (IsEven(num3) == 1) {
		printf("¦���Դϴ�.\n");
	}
	else {
		printf("Ȧ���Դϴ�.\n");
	}


	printf("\n3. �Է��� ���� ���밪�� ���\n");
	int num4 = 0;

	scanf(" %d", &num4);

	printf("���밪: %d\n", Abs(num4));


	printf("\n4. 1~�Է¹��� ������ 3�� ����� �Ǻ��ϴ� �Լ��� ����� 3�� ����� ��� ���.\n");
	int num5 = 0;
	
	scanf(" %d", &num5);

	for (int i = 1; i <= num5; i++) {
		if (MultiThree(i)) {
			printf("%d ", i);
		}
	}
	printf("\n");


	printf("\n5. �Է¹��� ���� �Ųٷ� ����ϴ� �Լ� �ۼ�.\n");
	int num6 = 0;

	scanf(" %d", &num6);

	printf("������ ��: %s\n", ReverseNumber(num6));



	system("pause");

	return 0;
}

void GetName() {
	char name[20] = "";

	printf("\n�̸��� �Է�: ");
	scanf(" %s", name);

	printf("%s\n", name);

}

int Add(int a, int b) {
	return a + b;
}

int BigNumber(int num1 , int num2)
{
	// num1 > num2 �ΰ�? num1��ȯ : num2��ȯ;
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


