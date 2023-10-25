#include <iostream>
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
    float leghtInMeterFromUser
        std::count << "Podaj d³ugoœæ w metrach";
    std::cin >> leghtInMeterFromUser;

    float lenghtInMeterFromUser
        lenghtInMeterFromUser = lenghtInMeterFromUser / 100;
    std::count <<"Dugoœæ w centymetrach
}


int main()
{
  //task1()
    task2()
}
/*
Algorytm - zbiór instrukcji realizuj¹cy postawiony przed nim zadanie
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