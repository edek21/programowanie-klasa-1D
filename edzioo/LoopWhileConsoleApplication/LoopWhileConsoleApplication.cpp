#include <iostream>
//Napisz program który policzy sume cyfr podanej przez użytkownika ;iczby.
void task1()
{
	int Number;
		do
		{
			std::cout << "Podaj liczbe dodatnia \n ";
			std::cin >> Number;
		} while (Number > 0);

		int NumberOfDigit = 1;
		/*	if (Number > 9)
		{
			Number = Number / 10;
			NumberOfDigit++;
				if (Number > 9)
				Number = Number / 10;
				NumberOfDigit++;

				if (Number > 9)
				{
					//...
				}
		}  */
		while (Number > 9)
		{
			Number = Number / 10;
			NumberOfDigit++;
		}std::cout << "Ilość cyfr w liczbie wynosi: " << NumberOfDigit;
}		
void task2()
{
	int firstNumber, secondNumber;

	do
	{
		std::cout << "Podaj pierwsz¹ liczbê dodatni¹: \n";
		std::cin >> firstNumber;
	} while (firstNumber < 0);

	do
	{
		std::cout << "Podaj drug¹ liczbê dodatni¹: \n";
		std::cin >> secondNumber;
	} while (secondNumber < 0);

	/*if (secondNumber != 0)
	{
		int tmpfirstNumber = firstNumber;
		firstNumber = secondNumber;
		secondNumber = tmpfirstNumber % secondNumber;
		if (secondNumber != 0)
		{
			//...
		}
	}
	*/

	while (secondNumber != 0)
	{
		int tmpfirstNumber = firstNumber;
		firstNumber = secondNumber;
		secondNumber = tmpfirstNumber % secondNumber;
	}

	std::cout << "NWD = " << firstNumber;
}
void task3()
{
	double cityT = 100000, cityB = 300000;
	while (cityT < cityB)
	{
		cityT = cityB * 1.03;
		cityB = cityT * 1.02;
	}
}
void task4()
{

	int number;

	do
	{
		std::cout << "Podaj pierwsz¹ liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);

	int tmpNumber = number;
	int reversNumber = 0;
	while (tmpNumber > 0)
	{
		int rest = tmpNumber % 10;
		reversNumber = reversNumber * 10 + rest;
		tmpNumber = tmpNumber / 10;
	}

	if (number == reversNumber)
		std::cout << "Liczba jest palindromem";
	else
		std::cout << "Liczba jest nie palindromem";

}
void task5()
{
	int number;
	std::cout << "Podaj liczbę dodatnia\n";
	std::cin >> number; 
	int number, counter = 0;

	do
	{
		std::cout << "Podaj pierwsz¹ liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);


	while (counter != number)
	{
		std::cout << "Hello World\n";
		counter++;
	}
}
int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	task5();
}

//Miasto T.ma obecnie 100 tys.mieszkańców, ale jego populacja rośnie co roku o 3 % rocznie.
//Miasto B. ma 300 tys. mieszkańców i ta liczba rośnie w tempie 2% na rok.
// Wykonaj symulację prezentującą liczbę mieszkańców w obu miastach i zatrzymującą się, 
// gdy liczba mieszkańców miasta T. przekroczy liczbę z miasta B.

