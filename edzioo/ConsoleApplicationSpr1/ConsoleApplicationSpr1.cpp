#include <iostream>



int main()
{
	float sideA, sideB, area;
	std::cout << "Podaj bok A:";
	std::cin >> sideA;

	std::cout << "Podaj bok B:";
	std::cin >> sideB;

	area = sideA * sideB;
	std::cout << "Pole prostokata wynosi:" << area;
}

