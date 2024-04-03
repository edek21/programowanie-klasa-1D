
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



}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	task5();
}


