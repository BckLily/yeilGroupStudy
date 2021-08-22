#pragma once

#include <iostream>
#include <Windows.h>
#include <WinCon.h>
#include <string>
#include <format>
#include <string_view>

#define BLACK	0
#define BLUE	1
#define GREEN	2
#define AQUA	3
#define RED		4
#define PRUPLE	5
#define YELLOW	6
#define WHITE	7



// Console李쎌뿉 ?쒖떆?섎뒗 湲????蹂寃??⑥닔.
// ??遺遺꾩? text???됱씠怨? ?룸?遺꾩? 湲???됱씠??
// ?룸?遺꾩? 湲곕낯??0, 利?寃??됱쑝濡?珥덇린?뷀빐?먯뿀??
void FontColorChange(unsigned short textColor=WHITE, unsigned short backColor=BLACK);

// Console李쎌쓽 ?ш린瑜?蹂寃쏀븯???⑥닔
void ConsoleWindowSize(unsigned short cols = 140, unsigned short lines = 40);
