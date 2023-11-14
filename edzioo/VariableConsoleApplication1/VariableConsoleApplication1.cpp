#include <iostream>
/*
* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik
* Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.

* Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Napisz program, który poprosi u¿ytkownika o podanie trzech liczb (a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki.

* Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych (x1, y1) i (x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.


*/
//napisz program który wvzytaod u¿ytkowika jego wiek i wyœwietli go na konsoli
void task1 ()
{
    short AgeFromUser ;
    std::cout << "Podaj swój wiek.\n";
    std::cin >> AgeFromUser;

    std::cout << "Masz " << AgeFromUser << "lat\n";
}
//Stwórz program który pobiera od u¿ytkowników d³ugoœæ w metrach i przelicza ja na centymetry, milimetry,kilometry. Wyœwietl wynik
void task2()
{
    float lenghtInMeterFromUser;
    std::cout << "Podaj d³ugoœæ w metrach: ";
    std::cin >> lenghtInMeterFromUser;

    float lenghtInCentimiterFromUser;
    lenghtInCentimiterFromUser = lenghtInMeterFromUser * 100;

    float lenghtInMIlimiterFromUser;
    lenghtInMIlimiterFromUser  = lenghtInCentimiterFromUser * 100;

    float lenghtKilometerFromUser;
    lenghtKilometerFromUser = lenghtInMeterFromUser / 1000;

   std::cout << "Metry" << lenghtInMeterFromUser << "\n";
   std::cout << "Centymetry" << lenghtInCentimiterFromUser << "\n";
   std::cout << "Milimetry" << lenghtInMIlimiterFromUser << "\n";
   std::cout << "Kilometry" << lenghtKilometerFromUser << "\n";

}
// Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.
void task3()
{
    float a, b, average;
    std::cout << "Podaj liczbe:";
    std::cin >> a;

    std::cout << "Podaj drug¹ liczbê:";
    std::cin >> b;

    average = a + b / 2;
    std::cout << "Srednia " << average << "\n";
       
}
// Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta.
void task4()
{
    float lenghtSideA, LenghtSideB, area;
     std::cout << "Podaj d³ugoœæ boku:";
     std::cin >> lenghtSideA;

     std::cout << "Podaj d³ugoœæ drugiego boku:";
     std::cin >> LenghtSideB;

     area = lenghtSideA * LenghtSideB;
     std::cout << "Podaj Wynik " << area ;
    
}
//* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.
void task5()
{
    float lenghtSideA, lenghtHeight, area;
    std::cout << "Podaj d³ugoœæ boku:";
    std::cin >> lenghtSideA;

    std::cout << "Podaj wysokoœæ:";
    std::cin  >> lenghtHeight;

    area = (lenghtSideA * lenghtHeight) / 2;
    std::cout << "Podaj wynik:" << area;
}
//* Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.
void task6()
{
    float radius, circleArea; 
       
    std::cout << "Podaj d³ugoœæ promienia:";
    std::cin >> radius;

    circleArea = radius * radius * 3, 14;
    std::cout << "Wynik wynosi:" << circleArea;
}
//* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.
void task7()
{
    float lenghtSideA, lenghtSideB, lenghtHeight, area;

    std::cout << "Podaj d³ugoœæ boku:";
    std::cin >> lenghtSideA;

    std::cout << "Podaj d³ugoœæ drugiego boku:";
    std::cin >> lenghtSideB;

    std::cout << "Podaj wysokoœæ:";
    std::cin >> lenghtHeight;

    area = (lenghtSideA + lenghtSideB) * lenghtHeight / 2;
    std::cout << "Wynik wynosi:" << area;
}
//* Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.
void task8()
{
    float lenghtCelcjusz, lenghtFarenheit;
    std::cout << "Podaj temperatura w stopniach celcjusza:";
    std::cin >> lenghtCelcjusz;

    lenghtFarenheit = 1.8 * lenghtCelcjusz + 32;
    std::cout << "Tmeperatura w stopniach Farenheita wynosi :" << lenghtFarenheit;

}
int main()
{
    setlocale(LC_CTYPE, "polish");
  //task1();
  // task3();
  //task4();
  //task5();
  //task6();
  //task7();
    task8();
}
/*
Algorytm - skoczony zbiór instrukcji realizuj¹cy postawiony przed nim zadanie
sposób zapisu:
* w punktach
* opis s³owny
* jêzyk programowania lub pseudokodd
* zbiór rysunków
* schemat blokowy

zmienna- jest to pewien obszar w pamiêci s³u¿¹cy do przechwywania danych. Te dane mo¿na modyfikowaæ.
zmienna pozwala przechowywaæ tylko jedn¹ wartoœæ w danym momencie czasu.
Deklaracja zmeiennej - moment jej utworzenia

typ_zmiennej nazwa_zmiennej

Typ zmiennej - mówi o wielkoœci obszaru w pamiêcii o rodzaju przechowywanych danych

short  liczby ca³kowiteze znakiem ze znakiem 2 bajtów -> 16bitów <-32 768; 32 767>
int liczby ca³kowite ze znakiem 4 bajtów <- 2 147 483 648;2 147 483 647>
long long liczby cz³kowite ze znakiem  8 bajtów <-9 223 372 836 854 775 888;9 223 372 836 854 775 887> 9 trylionów 

Je¿eli przed powy¿szymi typami damy s³owo "unsigned" to zakres jest od o do podwojonego zakresu górnego plus 1 (32 767+2+1)
float- liczby rzeczywiste ze znakiem 4 bajtów
long double - liczby rzeczywiste ze znakiem 12 bajtów

nazwa zmiennej to nazwa obszaru w pamiêci. Poprzez tê nazwe odwo³ujemy sie do tego obszaru.

wymagania kompilatora wzgledem nazwy:
*uzycie tylko dozwlononych znaków - alfabet angielski, a-z oraz A-Z.
* cyfry arabskie 0-9.
* podkreœlenie (pod³oga).
* nie mo¿e to byæ s³owo kluczowe danego jêzyka programowania.
* musi byæ unikalny w danej widocznoœci (dana widocznoœæ - zakres widocznoœci zmiennej)\\

Wymagania programistów:
*jeœli nazwa sk³ada sie z wielu wyrazóe zamiast spacji u¿ywamy znaków podreœlenia.
* u¿ywamy znaku podkreœlenia First_number_from_user
* stosujemy canel case< czyli piszemy wszystko razem a s³owa (zaczynamy od drugiego)
* zaczynamy z du¿ej litery np.FirstNumberFromUser
* nazwa zmiennej musi oddawaæ charakter
*/