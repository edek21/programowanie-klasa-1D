#include <iostream>
//Napisz program, kt�ry pobierze liczbe od uzytkownika i wy�wieti czy jest dodatnia czy ujemna
void task1()
{
	int number;
	std::cout << "Podaj liczbe kt�ra chcesz sprawdzi�:";
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


