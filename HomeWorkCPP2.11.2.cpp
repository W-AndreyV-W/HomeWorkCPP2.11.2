﻿#include <iostream>
#include <Windows.h>
#include "Leaver.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	Leaver leaver(name);
	leaver.leave();
}