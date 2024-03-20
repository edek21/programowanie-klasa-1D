/*
* Program obliczający sumę liczb od 1 do 100
* Program sprawdzający czy podana liczba jest liczbą doskonałą (czyli taką, której suma dzielników (z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
* Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
* Program obliczający n!.
* Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
* Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
* Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
* Program obliczający sumę kwadratów liczb od 1 do 10
* Program, który wczyta podstawę oraz wykładnik oraz wyliczy wynik.
* Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
*/
#include <iostream>
//Napisz program, który wyœwietli "Hello World" tyle razy ile chce u¿ytkownik
void task1()
{
	int number;

	do
	{
		std::cout << "Podaj liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);

	for (int i = 0; i != number; i++)
	{
		std::cout << "Hello World\n";
	}
}

//Napisz program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10
void task2()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << i << "\n";
	}
}   
	//Namaluj równoleglobok z "X". Wysokosc i szeokosc wczytaj z klawiatury.
void task3()
{
	int width, height;

	do
	{
		std::cout << "Podaj szerokoœæ: \n";
		std::cin >> width;
	} while (width < 0);

	do
	{
		std::cout << "Podaj wysokoœæ: \n";
		std::cin >> height;
	} while (height < 0);

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << "X";
		}
		std::cout << "\n";
	}

}
//Program obliczający sumę liczb od 1 do 100
void task4()
{
	int sum = 0, number;

	for (int i = 1; i <= 100; i++)
	{
		sum += i;
	}

	std::cout << "Suma liczb od 1 do 100 wynosi: " << sum;
}
/*
Program sprawdzający czy podana liczba jest liczbą doskonałą(czyli taką, której suma dzielników(z wyłączeniem samej siebie) jest równa danej
liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
*/
void task5()
{
	int sumOfDivisors = 0, number;

	do
	{
		std::cout << "Podaj liczbę: \n";
		std::cin >> number;
	} while (number < 0);
}
//Program obliczający n!.
void task6()
{
	int number, silnia = 1;

	do
	{
		std::cout << "Podaj liczbę dodatnią: ";
		std::cin >> number;
	} while (number < 0);

	for (int i = number; i > 1; i--)
	{
		silnia *= i;
	}

	std::cout << "Silnia z liczby " << number << " wynosi: " << silnia;
}

//Program obliczający sumę kwadratów liczb od 1 do 10
void task7()
{
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		sum += i * i;
	}
	std::cout << "Suma kwadratów liczb od 1 do 10 wynosi: " << sum;
}

//Program, który wczyta podstawę oraz wykładnik oraz wyliczy wynik.
void task8()
{
	int result = 1, base, exponent;

	std::cout << "Podaj podstawę: ";
	std::cin >> base;
	std::cout << "Podaj wykładnik: ";
	std::cin >> exponent;

	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	std::cout << "Wynik wynosi :" << result;
}

//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task9()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			std::cout << i << ", ";
	}
}

//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
void task10()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << "x" << j << "=" << i * j << "\n";
		}
	}
}

//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task11()
{
	for (int i = 1; i <= 10; i++)
	{
		int silnia = 1;
		for (int j = 1; j <= i; j++)
		{
			silnia *= j;
		}
		std::cout << "Silnia z " << i << " to " << silnia << "\n";
	}
}
//


int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	
}

