
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
		std::cout << "Poda�e� ma�a litere alfabetu \n";
	}
	else
	{
		std::cout << "Poda�e� inny zmnak \n";
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
	std::cout << "Podaj has�o\n";
	std::cin >> password;

	if (password == "abc123")
	{
		std::cout << "Has�o poprawne\n";
	}
	else
		std::cout << "Has�o niepoprawne\n";
}
void task5()
{
	std::string textFromUser;
	std::cout << "Podaj tekst\n";
	std::cin >> textFromUser;

	std::cout << "Podany tekst: " << textFromUser << "\n";
	std::cout << "Pierwszy znak w tek�cie: " << textFromUser[0] << "\n";
	std::cout << "Drugi znak w tek�cie: " << textFromUser[1] << "\n";
	int lenght = textFromUser.length();
	std::cout << "D�ugo�� �a�cucha znak�w: " << lenght << "\n";
	std::cout << "Ostatni znak w tek�cie: " << textFromUser[lenght - 1] << "\n";

	int counter = 0;
	for (int i = 0; i < lenght; i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}
	std::cout << "Ma�ych liter 'a' jest: " << counter << "\n";
}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	task5();
}


