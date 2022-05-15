#include <iostream>
#include <math.h>
#include <windows.h>
#include <thread>

#include <chrono>
#include "headers.h"

using std::cout;
using std::endl;
using std::cin;
using namespace std::chrono_literals;

void Start::wybor()
{
    int a;
    cout << "wybierz opcje wyboru\n";
    cout << "--------------------" << endl;
    cout << endl;
    cout << "Wpisz 1 aby przejsc do fibonnaciego" << endl;
    cout << "Wpisz 2 aby przejsc do Eulera" << endl;
    cout << "Wpisz 3 aby przejsc do Pitagorasa" << endl;
    cout << endl;
    cout << "--------------------" << endl;
    do
    {
        std::cin >> a;
        if(a<1 || a>3)
        {
            cout << "Podaj prawidlowa liczbe!"<< endl;
        }
    }
    while (a<1 || a>3);
    switch(a)
    {
    case 1 :
        wybor_fibonnaci();
        break;
    case 2 :
        wybor_euler();
        break;
    case 3 :
        wybor_pitagoras();
        break;
    }
}

void Start::wybor_fibonnaci()
{
    fibonnaci_dodaj();
    int wybor_funkcji;
    cout << "Czy chcesz otrzymac obliczenia dla wybranej przez ciebie liczby w nastepnym kroku? (wpisz 1 jesli tak lub 0 jesli nie)";
    cout << endl;
    cin >> wybor_funkcji;
    if (wybor_funkcji == 1)
    {
        fibonnaci_oblicz();
    }
    else if (wybor_funkcji == 0)
    {
        system("cls");
        wybor();
    }
}

void Start::wybor_euler()
{
    euler_dodaj();
    int wybor_funkcji;
    cout << "Czy chcesz otrzymac obliczenia dla wybranej przez ciebie liczby w nastepnym kroku?" << std::endl;
    cin >> wybor_funkcji;
    if (wybor_funkcji == 1)
    {
        euler_oblicz();
    }
    else if (wybor_funkcji == 0)
    {
        system("cls");
        wybor();
    }
}

void Start::wybor_pitagoras()
{
    pitagoras_dodaj();
    int wybor_funkcji;
    cout << "Czy chcesz otrzymac obliczenia dla wybranej przez ciebie liczby w nastepnym kroku?";
    cin >> wybor_funkcji;
    if (wybor_funkcji == 1)
    {
        pitagoras_oblicz();
    }
    else if (wybor_funkcji == 0)
    {
        system("cls");
        wybor();
    }
}

void Start::fibonnaci_dodaj()
{
    int wybor;
    int dlugosc;
    int a;
    cout << "Podaj dlugosc tablicy" << endl;
    cin >> dlugosc;
    do
    {
        cout << "Chcesz dac liczby do tylu kolejki czy na sam jej przod? (wybierz 1 jesli chcesz pchnac do tylu lub 2 jesli do przodu) " << endl;
        cin >> wybor;
        if (wybor > 2 || wybor < 1)
        {
            cout << "Podaj prawidlowa liczbe!" << endl;
        }
    }
    while(wybor > 2 || wybor < 1) ;
    if (wybor == 1)
    {
        cout << "Podaj liczby ktore chcesz pchnac na tyl kolejki" << endl;
        for (int i = 0; i<dlugosc; i++)
        {
            cin >> a;
            liczba2.push_back(a);
        }
    }
    else if (wybor == 2)
    {
        cout << "Podaj liczby ktore chcesz pchnac na przod kolejki" << endl;
        for (int i = 0; i<dlugosc; i++)
        {
            cin >> a;
            liczba2.push_front(a);
        }
    }
}


void Start::euler_dodaj()
{
    int wybor;
    int dlugosc;
    int a;
    cout << "Podaj dlugosc tablicy " << endl;
    cin >> dlugosc;
    do
    {
        cout << "Chcesz dac liczby do tylu kolejki czy na sam jej przod? (wybierz 1 jesli chcesz pchnac do tylu lub 2 jesli do przodu) " << endl;
        cin >> wybor;
        if (wybor > 2 || wybor < 1)
        {
            cout << "Podaj prawidlowa liczbe!" << endl;
        }
    }
    while(wybor > 2 || wybor < 1) ;
    if (wybor == 1)
    {
        cout << "Podaj liczby ktore chcesz pchnac na tyl kolejki" << endl;
        for (int i = 0; i<dlugosc; i++)
        {
            cin >> a;
            n2.push_back(a);
        }
    }
    else if (wybor == 2)
    {
        cout << "Podaj liczby ktore chcesz pchnac na przod kolejki" << endl;
        for (int i = 0; i<dlugosc; i++)
        {
            cin >> a;
            n2.push_front(a);
        }

    }
}

void Start::pitagoras_dodaj()
{
    int wybor_liczby;
    int dlugosc;
    int liczby;
    cout << "Podaj dlugosc tablicy" << endl;
    cin >> dlugosc;
    cout << "Chcesz dac liczby do tylu kolejki czy na sam jej przod? (wybierz 1 jesli chcesz pchnac do tylu lub 2 jesli do przodu) " << endl;
    do
    {
        cin >> wybor_liczby;
        if (wybor_liczby > 2 || wybor_liczby < 1)
        {
            cout << "Podaj prawidlowa liczbe!" << endl;
        }
    }
    while(wybor_liczby > 2 || wybor_liczby < 1) ;
    if (wybor_liczby == 1)
    {
        cout << "Podaj liczby ktore chcesz pchnac na tyl kolejki dla pierwszego boku" << endl;
        for (int i = 0; i<dlugosc; i++)
        {
            cin >> liczby;
            a2.push_back(liczby);
        }
        cout << "Podaj liczby,ktore chcesz pchnac na tyl kolejki dla drugiego boku" << endl;
        for (int i = 0; i<dlugosc; i++)
        {
            cin >> liczby;
            b2.push_back(liczby);
        }
    }
    else if (wybor_liczby == 2)
    {
        cout << "Podaj liczby ktore chcesz pchnac na przod kolejki dla pierwszego boku" << endl;
        for (int i = 0; i<dlugosc; i++)
        {
            cin >> liczby;
            a2.push_front(liczby);
        }
        cout << "Podaj liczby ktore chcesz pchnac na przod kolejki dla drugiego boku" << endl;
        for (int i = 0; i<dlugosc; i++)
        {
            cin >> liczby;
            b2.push_front(liczby);
        }

    }
}

void Start::fibonnaci_oblicz()
{
    int dlugosc = liczba2.size();
    int wynik;
    int wybor_liczby;
    cout << "Wybierz Ktora liczbe chcesz obliczyc dla ciagu fibonnaciego (Podaj liczbe od " << 0 << " do " << dlugosc -1  << ")" << endl;
    do
    {
        cin >> wybor_liczby;
    }
    while(wybor_liczby > dlugosc);
    if (liczba2.at(wybor_liczby) > 1)
    {
        wynik = (liczba2.at(wybor_liczby) - 1) + (liczba2.at(wybor_liczby) - 2);
    }
    else if (liczba2.at(wybor_liczby) == 1)
    {
        wynik = 1;
    }
    else if (liczba2.at(wybor_liczby) == 0)
    {
        wynik = 0;
    }
    cout << "Wynik to: " << wynik << endl;
    cout << "W tym momencie program wroci do sekcji wyboru " << endl;
    fibonnaci_shrink();
    std::this_thread::sleep_for(3000ms);
    system("cls");
    wybor();
}

void Start::euler_oblicz()
{
    int dlugosc = n2.size();
    int wynik;
    int wybor_liczby;
    cout << "Wybierz Ktora liczba chcesz obliczyc dla ciagu Eulera (Podaj liczbe od " << 0 << " do " << dlugosc-1  << ")" << endl;;
    do
    {
        cin >> wybor_liczby;
    }
    while(wybor_liczby>dlugosc);
    wynik = pow(n2.at(wybor_liczby),2) - n2.at(wybor_liczby) + 41;
    cout << "Wynik dla ciagu eulera to: " << wynik << endl;
    cout << "W tym momencie program wroci do sekcji wyboru " << endl;
    euler_shrink();
    std::this_thread::sleep_for(3000ms);
    system("cls");
    wybor();
}

void Start::pitagoras_oblicz()
{
    int dlugosc = a2.size();
    int wynik;
    int wybor_liczby;
    cout << "Wybierz Ktora liczbe chcesz obliczyc dla Pitagorasa (Podaj liczbe od " << 0 << " do " << dlugosc-1  << ")" << endl;
    do
    {
        cin >> wybor_liczby;
    }
    while(wybor_liczby > dlugosc);
    wynik = pow(a2.at(wybor_liczby),2) + pow(b2.at(wybor_liczby),2);
    cout << "Przeciwprostokotna wynosi: " << floor(sqrt(wynik)) << endl;
    cout << "W tym momencie program wroci do sekcji wyboru " << endl;
    pitagoras_shrink();
    std::this_thread::sleep_for(3000ms);
    system("cls");
    wybor();
}

void Start::fibonnaci_shrink() {
    liczba2.resize(0);
}

void Start::euler_shrink() {
    n2.resize(0);
}

void Start::pitagoras_shrink() {
    a2.resize(0);
    b2.resize(0);
}

Start::Start(std::deque<int>liczba0,std::deque<int>n20,std::deque<int>a20,std::deque<int>b20)
{
    liczba2 = liczba0;
    n2 = n20;
    a2 = a20;
    b2 = b20;
}




