#include <iostream>
//Napisz program, który pobierze liczbe od uzytkownika i wyœwieti czy jest dodatnia czy ujemna
void task1()
{
	int number;
	std::cout << "Podaj liczbe która chcesz sprawdziæ:";
	std::cin >> number;

	if (number > 0)
	{
		std::cout << "liczba jest dodatnia:\n";
	}
	else
	{
		std::cout << " liczba jest ujemna:"; "\n";
	}


}

int main()
{
	task1();
}


