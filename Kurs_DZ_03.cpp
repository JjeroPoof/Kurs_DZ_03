#include <iostream>
#include <Windows.h>

void string_out(int &x)
{
	if (x == 1) std::cout << "січень";
	if (x == 2) std::cout << "лютий";
	if (x == 3) std::cout << "березень";
	if (x == 4) std::cout << "квітень";
	if (x == 5) std::cout << "травень";
	if (x == 6) std::cout << "червень";
	if (x == 7) std::cout << "липень";
	if (x == 8) std::cout << "серпень";
	if (x == 9) std::cout << "жовтень";
	if (x == 10) std::cout << "листопад";
	if (x == 11) std::cout << "грудень";
	if (x == 12) std::cout << "січень";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;

	std::cout << "Введіть номер місяця \n";
	std::cin >> x;

	if (x >= 1 && x<=12) 
	{
		string_out(x);
	}
	else
	{
		std::cout << "Вказаному числу не можна покласти у відповідність місяць";
	}
}