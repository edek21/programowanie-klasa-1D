#include <iostream>
//Napisz program który policzy sume cyfr podanej przez u¿ytkownika ;iczby.
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
		}std::cout << "Iloœæ cyfr w liczbie wynosi: " << NumberOfDigit;
}		
void task2()
{

}
int main()
{
	//task1();
	task2();
}


