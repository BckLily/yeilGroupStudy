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



// Consoleâ�� ǥ�õǴ� ���� �� ���� �Լ�.
// �� �κ��� text�� ���̰�, �޺κ��� ���� ���̴�.
// �޺κ��� �⺻�� 0, �� ���������� �ʱ�ȭ�صξ���.
void FontColorChange(unsigned short textColor=WHITE, unsigned short backColor=BLACK);

// Consoleâ�� ũ�⸦ �����ϴ� �Լ�
void ConsoleWindowSize(unsigned short cols = 140, unsigned short lines = 40);
