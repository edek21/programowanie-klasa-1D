

#include <iostream>
void task2()
{
	int randomNumber;

	srand(time(0));
	randomNumber = rand();
	std::cout << "Liczba:" << randomNumber;

}
void task3()
{
	int upperRange;

	std::cout << "Podaj górnyh zakres:";
	std::cin >> upperRange;


	std::cout << "0, ";
	if (upperRange >= 1)
	{
		std::cout << "1, ";
		if (upperRange >= 2)
		{
			std::cout << "2, ";
			if (upperRange >= 3)
			{
				std::cout << "3, ";

			}
		}
	}
}

int main()
{
	//task2();
	task3();
}


