

#include <iostream>
//Napisz program, który wczyta 5 liczb a nast?pnie wy?wietli je w odwrotnej kolejno?ci.
void task1()
{
    const unsigned int ARRAY_NUMBER_SIZE = 5;

    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        std::cout << "Podaj " << (i + 1) << " liczb?\n";
        std::cin >> numbers[i];
    }

    for (int i = ARRAY_NUMBER_SIZE - 1; i >= 0; i--)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}

void task2()
{
    const unsigned int ARRAY_NUMBER_SIZE = 5;
    int numbers[ARRAY_NUMBER_SIZE];

    srand(time(NULL));
    std::cout << "Liczby w kolekcji:\n";
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = rand() % 101;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n\n";

    int sum = 0;
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        sum = sum + numbers[i];
    }

    int arithmeticAverage = sum / ARRAY_NUMBER_SIZE;

    std::cout << "Œrednia arytmetyczna tych elementów tablicy wynosi: " << arithmeticAverage;
}
void task2()
{
    const unsigned int ARRAY_NUMBER_SIZE = 5;

    srand(time(NULL));

    std::cout << "Liczby w kolekcji: \n";
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = rand() % 11;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n\n";

    int sum = numbers[0]; //przyspieszenie poprzez przypisanie sumie indeksu 0, co skraca pêtle. W poprzednch programach nie zastosowane
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        sum = sum + numbers[i];
    }

    double arithmeticAverage = sum * 1.0 / ARRAY_NUMBER_SIZE;

    std::cout << "Œrednia arytmetyczna tych elementów tablicy wynosi: " << arithmeticAverage << "\n";
}
int main()
{
   // task1();
  task2();
}


