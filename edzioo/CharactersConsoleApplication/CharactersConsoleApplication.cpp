
#include <iostream>
void task1()
{
	char characterfromuser;
	std::cout << "Podaj jeden znak \n";
	std::cin >> characterfromuser;

	std::cout << "Podano :" << characterfromuser << "\n";

	characterfromuser = characterfromuser = 1;
	std::cout << "Podano : " << characterfromuser << "\n";

	characterfromuser = 97;
	characterfromuser = 'a';
	characterfromuser = 'a' + 1; 
}
void task2()
{
	char characterFromUser;
	std::cout << "Podaj jeden znak:\n";
	std::cin >> characterFromUser; 

	if (characterFromUser == 'a'
		|| characterFromUser == 'b'
		|| characterFromUser == 'c'
		//...
		|| characterFromUser == 'z')
	{
		std::cout << "Poda³eœ ma³a litere alfabetu \n";
	}
	else
	{
		std::cout << "Poda³eœ inny zmnak \n";
	}
}
void task3()
{
	std::string userName;
	std::cout << "Podaj swoje imie \n";
	std::cin >> userName;

	std::cout << "Witaj" << userName << "tutaj.\n";
}
void task4()
{
	std::string password;
	std::cout << "Podaj has³o\n";
	std::cin >> password;

	if (password == "abc123")
	{
		std::cout << "Has³o poprawne\n";
	}
	else
		std::cout << "Has³o niepoprawne\n";
}
void task5()
{
	std::string textFromUser;
	std::cout << "Podaj tekst\n";
	std::cin >> textFromUser;

	std::cout << "Podany tekst: " << textFromUser << "\n";
	std::cout << "Pierwszy znak w tekœcie: " << textFromUser[0] << "\n";
	std::cout << "Drugi znak w tekœcie: " << textFromUser[1] << "\n";
	int lenght = textFromUser.length();
	std::cout << "D³ugoœæ ³añcucha znaków: " << lenght << "\n";
	std::cout << "Ostatni znak w tekœcie: " << textFromUser[lenght - 1] << "\n";

	int counter = 0;
	for (int i = 0; i < lenght; i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}
	std::cout << "Ma³ych liter 'a' jest: " << counter << "\n";
}
//Napisz program który bêdzie prosi³ o has³o,nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo
void task6()
{
	std::string pasword = "abc123";
	std::string userGuess;

	do {
		std::cout << "Podaj has³o:  ";
		std::cin >> userGuess;
	} while (userGuess != pasword);
	std::cout << "Zgad³eœ has³o!";
}
//Napisz program który pobiera ci¹g znaków od urzytkownika i wyœwietla liczbê samog³osek i wspó³g³osek w tym ci¹gu
void task7()
{



}
int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	task7();
}


