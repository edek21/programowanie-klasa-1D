#include <iostream>
/*
* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik
* Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.

* Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb (a, b) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb (a, b, c) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki.

* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie wsp�rz�dnych (x1, y1) i (x2, y2) dw�ch punkt�w w uk�adzie kartezja�skim, a nast�pnie obliczy odleg�o�� mi�dzy nimi, wy�wietlaj�c wynik.


*/
//napisz program kt�ry wvzytaod u�ytkowika jego wiek i wy�wietli go na konsoli
void task1 ()
{
    short AgeFromUser ;
    std::cout << "Podaj sw�j wiek.\n";
    std::cin >> AgeFromUser;

    std::cout << "Masz " << AgeFromUser << "lat\n";
}
//Stw�rz program kt�ry pobiera od u�ytkownik�w d�ugo�� w metrach i przelicza ja na centymetry, milimetry,kilometry. Wy�wietl wynik
void task2()
{
    float lenghtInMeterFromUser;
    std::cout << "Podaj d�ugo�� w metrach: ";
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
// Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb (a, b) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.
void task3()
{
    float a, b, average;
    std::cout << "Podaj liczbe:";
    std::cin >> a;

    std::cout << "Podaj drug� liczb�:";
    std::cin >> b;

    average = a + b / 2;
    std::cout << "Srednia " << average << "\n";
       
}
// Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.
void task4()
{
    float lenghtSideA, LenghtSideB, area;
     std::cout << "Podaj d�ugo�� boku:";
     std::cin >> lenghtSideA;

     std::cout << "Podaj d�ugo�� drugiego boku:";
     std::cin >> LenghtSideB;

     area = lenghtSideA * LenghtSideB;
     std::cout << "Podaj Wynik " << area ;
    
}
//* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.
void task5()
{
    float lenghtSideA, lenghtHeight, area;
    std::cout << "Podaj d�ugo�� boku:";
    std::cin >> lenghtSideA;

    std::cout << "Podaj wysoko��:";
    std::cin  >> lenghtHeight;

    area = (lenghtSideA * lenghtHeight) / 2;
    std::cout << "Podaj wynik:" << area;
}
//* Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.
void task6()
{
    float radius, circleArea; 
       
    std::cout << "Podaj d�ugo�� promienia:";
    std::cin >> radius;

    circleArea = radius * radius * 3, 14;
    std::cout << "Wynik wynosi:" << circleArea;
}
//* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.
void task7()
{
    float lenghtSideA, lenghtSideB, lenghtHeight, area;

    std::cout << "Podaj d�ugo�� boku:";
    std::cin >> lenghtSideA;

    std::cout << "Podaj d�ugo�� drugiego boku:";
    std::cin >> lenghtSideB;

    std::cout << "Podaj wysoko��:";
    std::cin >> lenghtHeight;

    area = (lenghtSideA + lenghtSideB) * lenghtHeight / 2;
    std::cout << "Wynik wynosi:" << area;
}
//* Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.
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
Algorytm - skoczony zbi�r instrukcji realizuj�cy postawiony przed nim zadanie
spos�b zapisu:
* w punktach
* opis s�owny
* j�zyk programowania lub pseudokodd
* zbi�r rysunk�w
* schemat blokowy

zmienna- jest to pewien obszar w pami�ci s�u��cy do przechwywania danych. Te dane mo�na modyfikowa�.
zmienna pozwala przechowywa� tylko jedn� warto�� w danym momencie czasu.
Deklaracja zmeiennej - moment jej utworzenia

typ_zmiennej nazwa_zmiennej

Typ zmiennej - m�wi o wielko�ci obszaru w pami�cii o rodzaju przechowywanych danych

short  liczby ca�kowiteze znakiem ze znakiem 2 bajt�w -> 16bit�w <-32 768; 32 767>
int liczby ca�kowite ze znakiem 4 bajt�w <- 2 147 483 648;2 147 483 647>
long long liczby cz�kowite ze znakiem  8 bajt�w <-9 223 372 836 854 775 888;9 223 372 836 854 775 887> 9 trylion�w 

Je�eli przed powy�szymi typami damy s�owo "unsigned" to zakres jest od o do podwojonego zakresu g�rnego plus 1 (32 767+2+1)
float- liczby rzeczywiste ze znakiem 4 bajt�w
long double - liczby rzeczywiste ze znakiem 12 bajt�w

nazwa zmiennej to nazwa obszaru w pami�ci. Poprzez t� nazwe odwo�ujemy sie do tego obszaru.

wymagania kompilatora wzgledem nazwy:
*uzycie tylko dozwlononych znak�w - alfabet angielski, a-z oraz A-Z.
* cyfry arabskie 0-9.
* podkre�lenie (pod�oga).
* nie mo�e to by� s�owo kluczowe danego j�zyka programowania.
* musi by� unikalny w danej widoczno�ci (dana widoczno�� - zakres widoczno�ci zmiennej)\\

Wymagania programist�w:
*je�li nazwa sk�ada sie z wielu wyraz�e zamiast spacji u�ywamy znak�w podre�lenia.
* u�ywamy znaku podkre�lenia First_number_from_user
* stosujemy canel case< czyli piszemy wszystko razem a s�owa (zaczynamy od drugiego)
* zaczynamy z du�ej litery np.FirstNumberFromUser
* nazwa zmiennej musi oddawa� charakter
*/