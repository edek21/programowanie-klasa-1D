#include <iostream>
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
    float leghtInMeterFromUser
        std::count << "Podaj d�ugo�� w metrach";
    std::cin >> leghtInMeterFromUser;

    float lenghtInMeterFromUser
        lenghtInMeterFromUser = lenghtInMeterFromUser / 100;
    std::count <<"Dugo�� w centymetrach
}


int main()
{
  //task1()
    task2()
}
/*
Algorytm - zbi�r instrukcji realizuj�cy postawiony przed nim zadanie
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