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

void task2()
{
	int number;
	std::cout << "Podaj liczbe :\n";
	std::cin >> number;

	if (number >= 1)
	{
		if (number < 10)
		{
			std::cout << "Liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "liczba nie jest w zakresie\n";
		}
	}
	else
	{
		std::cout << "liczba nie jest w zakresie\n";
	}
}
//Napisz program, który wczyta jedn¹ wartoœæ i wyœwietli najwiêksz¹ z nich.
void task3()
{
	int firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;

	std::cout << "Najwiêksza wartoœæ to:" << firstNumber << "\n";


}
//
void task4()
{
	int firstNumber, secondNumber, thirdNumber; 
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> thirdNumber;

	if (thirdNumber > firstNumber && thirdNumber > secondNumber)
		std::cout << "Najwiêksza wartoœæ to" << secondNumber << "\n";
	else
	{
		if (secondNumber > firstNumber)
			std::cout << " Najwiêksza liczba to" << secondNumber << "\n";
		else
			std::cout << "Najwiêksza wartoœæ to " << firstNumber << "\n"
	}

}
void task4()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbe: \n";
		std::cin >> firstNumber;

	std::cout << "Podaj liczbe: \n";
	std::cin >> secondNumber;

	std::cout << "Podaj liczbe: \n";
	std::cin >> thirdNumber;

	std::cout << "Podaj liczbe: \n";
	std::cin >> fourthNumber;

	if (fourthNumber > firstNumber && fourthNumber > secondNumber && fourthNumber > thirdNumber)
	{
		std::cout << "Najwiêksza wartoœæ to " << fourthNumber << "\n";
	}
	else
	{
		if (thirdNumber > firstNumber && thirdNumber > secondNumber)
			std::cout << "Najwiêksza wartoœæ to " << secondNumber << "\n";
		else
		{
			if (secondNumber > firstNumber)
				std::cout << "Najwiêksza wartoœæ to " << secondNumber << "\n";
			else
				std::cout << "Najwiêksza wartoœæ to " << firstNumber << "\n";

		}
	}
}
	

int main()
{
	//task1();
	//task2();
	//task3();
	task4();
}


