

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

	std::cout << "Podaj g�rnyh zakres:";
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


//Napisz program, kt�ry poprosi u�ytkownika o wprowadzenie dowolnej liczby ca�kowitej.Nast�pnie program powinien obliczy� i wy�wietli� liczb� cyfr.
 void task4()
{
	 int number, number2 = 0 ;
	 do
	 {
		 std::cout << "Podaj liczbe ca�kowit� : \n";
		 std::cin >> number;
	 } while (number < 0);
	 
	 do
	 {
		 number = number / 10;
		 number2++;
	 } while (number != 0);
		 
	 std::cout << "Ilo�� cyfr wynosi : " << number2;
}
 //Napisz program, kt�ry sprawdza czy wi�cej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.f
 void task5()
 {
	 int task5();
	 {



	 }




 }

int main()
{
	//task2();
	//task3();
	//task4();
	task5();
}
/*
*Napisz program, kt�ry poprosi u�ytkownika o wprowadzenie dowolnej liczby ca�kowitej.Nast�pnie program powinien obliczy� i wy�wietli� liczb� cyfr.
* Napisz program, kt�ry sprawdza czy wi�cej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.
* Popro� u�ytkownika o podawanie liczb, a� wprowadzi zero.Oblicz sum� oraz �redni� arytmetyczn� wprowadzonych liczb.
*/