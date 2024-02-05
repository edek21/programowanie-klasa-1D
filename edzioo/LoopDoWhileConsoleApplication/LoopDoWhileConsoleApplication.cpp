

#include <iostream>
void task2()
{
	int randomNumber;

	srand(time(0));
	randomNumber = rand();
	std::cout << "Liczba:" << randomNumber;

}


int main()
{
	task2();
}


