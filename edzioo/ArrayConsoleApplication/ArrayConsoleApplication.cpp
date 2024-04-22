

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

    int sum = numbers[0]; //przyspieszenie poprzez przypisanie sumie indeksu 0, co skraca pêtle. W poprzednch programach nie zastosowane..
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        sum = sum + numbers[i];
    }

    double arithmeticAverage = sum * 1.0 / ARRAY_NUMBER_SIZE;

    std::cout << "Œrednia arytmetyczna tych elementów tablicy wynosi: " << arithmeticAverage << "\n";

int max = numbers[0];
for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
{
    if (numbers[i] > max)
        max = numbers[i];
}
std::cout << "Maksymalna liczba pod wzglêdem wielkoœci w tablicy wynosi: " << max << "\n";

int min = numbers[0];
for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
{
    if (numbers[i] < min)
        min = numbers[i];
}
std::cout << "Najmniejsza liczba pod wzglêdem wielkoœci w tablicy wynosi: " << min << "\n";
}

void task3()
{
    //Algorytm sortuj¹cy (wyboru).


    const unsigned int ARRAY_NUMBER_SIZE = 10;

    srand(time(NULL));

    std::cout << "Liczby w kolekcji: \n";
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = rand() % 100;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n\n";

    for (int i = 0; i < ARRAY_NUMBER_SIZE - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < ARRAY_NUMBER_SIZE; j++)
        {
            if (numbers[j] < numbers[minIndex])
                minIndex = j;
        }
        int tmp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = tmp;
    }

    std::cout << "Po sortowaniu:\n";
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        std::cout << numbers[i] << ", ";
    }
}
//Napisz program który wczyta numer dnia tygodnia, a nastêpnie wyœwietli nazwê tego dnia lub komunikat b³êdu.
void task4()
{
    
        int numberFromUser;
        std::cout << "Podaj numer dnia tygodnia: \n";
        std::cin >> numberFromUser;

        std::string nameOfDay[7];
        nameOfDay[0] = "Poniedzia³ek";
        nameOfDay[1] = "Wtorek";
        nameOfDay[2] = "Œroda";
        nameOfDay[3] = "Czwartek";
        nameOfDay[4] = "Pi¹tek";
        nameOfDay[5] = "Sobota";
        nameOfDay[6] = "Niedziela";

        if (numberFromUser >= 0 && numberFromUser <= 6)
        {
            std::cout << "Nazwa dnia to: " << nameOfDay[numberFromUser] << " \n";
        }
        else
        {
            std::cout << "Nie ma takiego dnia \n";
        }
 
}


int main()
{
   // task1();
   // task2();
   // task3();
    task4();
}


