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


	printf("\n1. ???섎? ?낅젰?섏뿬 ?????섎? 異쒕젰\n");
	// ???섎? ?낅젰
	int num1 = 0, num2 = 0;

	scanf(" %d %d", &num1, &num2);
	// BigNumber?쇰뒗 ?⑥닔?????섎? 留ㅺ컻蹂?섎줈 ?섍꺼以??
	printf("???? %d\n", BigNumber(num1, num2));
	// BigNumber?쇰뒗 ?⑥닔 ?댁뿉??泥섎━??寃곌낵媛믪쓣 諛쏆븘??異쒕젰?쒕떎.


	printf("\n2. ?낅젰??媛믪씠 吏앹닔?몄? ??섏씤吏 ?먮퀎: ");
	int num3 = 0;

	scanf(" %d", &num3);
	if (IsEven(num3) == 1) {
		printf("吏앹닔?낅땲??\n");
	}
	else {
		printf("??섏엯?덈떎.\n");
	}


	printf("\n3. ?낅젰??媛믪쓽 ?덈?媛믪쓣 異쒕젰\n");
	int num4 = 0;

	scanf(" %d", &num4);

	printf("?덈?媛? %d\n", Abs(num4));


	printf("\n4. 1~?낅젰諛쏆? ?섍퉴吏 3??諛곗닔瑜??먮퀎?섎뒗 ?⑥닔瑜?留뚮뱾怨?3??諛곗닔瑜?紐⑤몢 異쒕젰.\n");
	int num5 = 0;
	
	scanf(" %d", &num5);

	for (int i = 1; i <= num5; i++) {
		if (MultiThree(i)) {
			printf("%d ", i);
		}
	}
	printf("\n");


	printf("\n5. ?낅젰諛쏆? ?섎? 嫄곌씀濡?異쒕젰?섎뒗 ?⑥닔 ?묒꽦.\n");
	int num6 = 0;

	scanf(" %d", &num6);

	printf("?ㅼ쭛? ?? %s\n", ReverseNumber(num6));



	system("pause");

	return 0;
}

void GetName() {
	char name[20] = "";

	printf("\n?대쫫???낅젰: ");
	scanf(" %s", name);

	printf("%s\n", name);

}

int Add(int a, int b) {
	return a + b;
}

int BigNumber(int num1 , int num2)
{
	// num1 > num2 ?멸?? num1諛섑솚 : num2諛섑솚;
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


