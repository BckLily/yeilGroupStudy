#include <iostream>
#include "ConsoleColorChange.h"


//int main(void) {
//	FontColorChange(GREEN);
//	std::cout << "???뺤닔媛 二쇱뼱議뚯쓣 ??A? B瑜?鍮꾧탳?섎뒗 ?꾨줈洹몃옩 ?묒꽦." << std::endl;
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
//	std::cout << "?뚮엺??45遺?鍮⑤━ 留욎텣?? ?쇱뼱?섍퀬 ?띠? ?쒓컙???덉쓣 ???뚮엺??紐?遺꾩쑝濡?留욎떠???섎뒗媛?" << std::endl;
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
//	std::cout << "A + B 異쒕젰?섎뒗 ?꾨줈洹몃옩, 留덉?留??낅젰? 0 0" << std::endl;
//	FontColorChange(WHITE);
//
//	int A = 0, B = 0;
//
//	// ?닿쾶 ?섎꽕...
//	while (std::cin >> A >> B, A != 0 && B != 0) {
//		std::cout << A + B << std::endl;
//	}
//
//	return 0;
//}


//
//int main(void) {
//	FontColorChange(GREEN);
//	std::cout << "0~99源뚯????섍? 二쇱뼱議뚯쓣 ??10蹂대떎 ?묒쑝硫??욎뿉 0??遺숈뿬?????먮━ ?섎줈 留뚮뱾怨?
//				媛??먮━???レ옄瑜??뷀븳?? 洹??ㅼ쓬 ?ㅻⅨ履??먮━???섏? ?욎뿉??援ы븳 ?⑹쓽 ?ㅻⅨ履??먮━ ?섎? 遺숈씠硫??덈줈???섎? 留뚮뱾 ???덈떎.\
//				?レ옄 N??二쇱뼱議뚯쓣 ????諛⑸쾿?쇰줈 ?섎? 留뚮뱾?댁꽌 ?ㅼ떆 N?쇰줈 ??留뚮뱾?댁????ъ씠?댁쓣 援ы븯???꾨줈洹몃옩???묒꽦\n";
//	FontColorChange(WHITE);
//
//	int input; // ?낅젰???レ옄.
//	int currNum; // ?꾩옱 ?レ옄
//	int calcNum; // ?먮┸???뷀븳 ?レ옄
//	int nextNum; // ?ㅼ쓬 ?レ옄
//	int count=1; // ?ъ씠??移댁슫??
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
	std::cout << "?뺤닔 N媛쒕줈 ?대（?댁쭊 ?섏뿴 A? ?뺤닔 X媛 二쇱뼱吏꾨떎. A?먯꽌 X蹂대떎 ?묒? ?섎? 紐⑤몢 異쒕젰?섎뒗 ?꾨줈洹몃옩 ?묒꽦" << std::endl;
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

